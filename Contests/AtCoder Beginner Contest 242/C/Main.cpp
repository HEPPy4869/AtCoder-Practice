#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int N;
    cin >> N;
    vector<vector<int>> dp(N+1, vector<int>(10, 0));
    

    for(int i=1;i<10;i++) dp[1][i]= 1;
    for(int i=2;i<N+1;i++){
        for(int j=1;j<=9;j++){
            for(int k=max(1, j-1);k<=min(9, j+1);k++){
                dp[i][k]+=dp[i-1][j];
                dp[i][k]%=998244353;
            }
        }
    }
    
    int ans = 0;
    for(int i=1;i<10;i++){
        ans+=dp[N][i];
        ans%=998244353;
    }
    cout << ans << endl;
    return 0;
}