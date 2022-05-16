#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int N;
    cin >> N;
    vector<int> C(N+1), P(N+1);
    vector<int> f(N+1), s(N+1);
    for(int i=1;i<N+1;i++) cin >> C[i] >> P[i];
    f[0]=0;
    s[0]=0;
    for(int i=1;i<N+1;i++){
        if(C[i]==1) {
            f[i] = f[i-1]+P[i];
            s[i] = s[i-1];
        }
        else{
            s[i] = s[i-1]+P[i];
            f[i] = f[i-1];
        }
    }
    int Q;
    cin >> Q;
    for(int i=0;i<Q;i++){
        int L, R;
        cin >> L >> R;
        
        cout << f[R]-f[L-1] << " " << s[R]-s[L-1] << endl;
    }
}