#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int N, X;
    cin >> N >> X;
    vector<int> a(N+1), b(N+1);
    for(int i=1;i<=N;i++) cin >> a[i] >> b[i];
    vector<vector<int>> dp(N+1, vector<int> (X+1, false));
    dp[0][0]=true;
    for(int i=1;i<=N;i++){
        for(int j=0;j<=X;j++){
            if(dp[i-1][j]==true){
                if(j+a[i]<=X) dp[i][j+a[i]] = true;
                if(j+b[i]<=X) dp[i][j+b[i]] = true;
            }
        }
    }
    if(dp[N][X]==true) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}