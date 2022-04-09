#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ll N, K, X;
    ll ans = 0;
    ll m = 0;
    cin >> N >> K >> X;
    vector<ll> A(N);
    for(int i=0;i<N;i++) cin >> A[i];
    for(int i=0;i<N;i++) ans += A[i];
    for(int i=0;i<N;i++) m += A[i]/X;
    if(m >= K){
        ans -= X*K;
        cout << ans << endl;
        return 0;
    }
    ans -= X*m;
    for(int i=0;i<N;i++) A[i] %= X;
    sort(A.begin(), A.end(), greater<ll>());
    for(int i=0;i<min(N, K-m);i++) ans -= A[i];
    if(ans>0) cout << ans << endl;
    else cout << 0 << endl;
}