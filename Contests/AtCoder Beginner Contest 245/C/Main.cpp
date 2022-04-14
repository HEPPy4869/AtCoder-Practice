#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ll N, K;
    cin >> N >> K;
    vector<ll> A(N);
    vector<ll> B(N);
    vector<ll> dp(N+1, false);
    vector<ll> ep(N+1, false);
    for(int i=0;i<N;i++) cin >> A[i];
    for(int i=0;i<N;i++) cin >> B[i];
    
    dp[0]=true;
    ep[0]=true;
    for(ll i=1;i<N;i++){
        if(dp[i-1]==true){
            if(abs(A[i-1]-A[i])<=K) dp[i]=true;
            if(abs(A[i-1]-B[i])<=K) ep[i]=true;
        }
        if(ep[i-1]==true) {
            if(abs(B[i-1]-A[i])<=K) dp[i]=true;
            if(abs(B[i-1]-B[i])<=K) ep[i]=true;
        }
        if(dp[i]==false && ep[i]==false){
            cout << "No" << endl;
            return 0;
        } 
    }
    cout << "Yes" << endl;
    return 0;
}