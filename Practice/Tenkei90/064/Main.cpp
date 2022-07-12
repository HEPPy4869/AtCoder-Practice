#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll N,Q,ans=0;
    cin >> N >> Q;
    vector<ll> A(N),B(N);
    for(int i=0;i<N;i++) cin >> A[i];

    for(int i=0;i<N-1;i++){
        B[i]=A[i+1]-A[i];
        ans+=abs(B[i]);
    }

    for(int i=0;i<Q;i++){
        int L,R,V; cin >> L >> R >> V; L--;R--;
        ll f=abs(B[L-1])+abs(B[R]);
        if(L>=1)B[L-1]+=V;
        if(R<N-1)B[R]-=V;
        ll b=abs(B[L-1])+abs(B[R]);
        ans+=(b-f);
        cout << ans << endl;
    }

    return 0;
}