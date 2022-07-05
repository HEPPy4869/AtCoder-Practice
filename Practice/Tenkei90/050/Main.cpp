#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int N, L;
    cin >> N >> L;
    vector<ll> dp(N+1,0);

    dp[0]=1;
    for(int i=1;i<N+1;i++){
        dp[i]+=dp[i-1];
        if(i-L>=0) dp[i]+=dp[i-L];
        dp[i]%=1000000007;
    }

    cout << dp[N] << endl;

    return 0;
}