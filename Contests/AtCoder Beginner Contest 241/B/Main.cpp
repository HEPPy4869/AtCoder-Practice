#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    vector<int> B(M);
    vector<int> used(N, 0);

    for(int i=0;i<N;i++) cin >> A[i];
    for(int i=0;i<M;i++) cin >> B[i];
    for(int i=0;i<M;i++){
        int f = 0;
        for(int j=0;j<N;j++){
            if(B[i]==A[j] && used[j]==false){
                used[j]=true;
                f=1;
                break;
            }
        }
        if(f==0){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}