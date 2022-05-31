#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int N,W;
    cin >> N >> W;
    vector<int> A(N);
    vector<int> c(W+1, 0);
    for(int i=0;i<N;i++) cin >> A[i];
    for(int i=0;i<N;i++){
        int p0=A[i];
        if(p0<=W) c[p0]=1;
        for(int j=i+1;j<N;j++){
            int p1=p0+A[j];
            if(p1<=W) c[p1]=1;
            for(int k=j+1;k<N;k++){
                int p2=p1+A[k];
                if(p2<=W) c[p2]=1;
        
            }
        }
    }

    int ans=0;
    for(int i=0;i<W+1;i++) ans+=c[i];
    cout << ans << endl;
    
    return 0;
}