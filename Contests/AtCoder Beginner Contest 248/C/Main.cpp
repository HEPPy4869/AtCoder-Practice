#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int N, M, K;
    const ll mod = 998244353;
    cin >> N >> M >> K;
    vector<vector<ll>> dp(N+1, vector<ll>(K+1, 0));
    dp[0][0]=1;
    for(int i=1;i<=N;i++){
        for(int j=0;j<=K;j++){
            for(int k=1;k<=M;k++){
                int a = j+k;
                if(a<=K) {
                    dp[i][a]+=dp[i-1][j];
                    dp[i][a]%=mod;
                }
            }
        }
    }
    ll ans=0;
    for(int i=1;i<=K;i++) {
        ans+=dp[N][i];
        ans%=mod;
    }
    
    cout << ans << endl;
    return 0;
}