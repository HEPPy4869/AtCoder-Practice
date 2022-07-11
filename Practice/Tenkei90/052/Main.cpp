#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int N;
    cin >> N;
    vector<vector<int>> A(N,vector<int>(6));
    for(int i=0;i<N;i++){
        for(int j=0;j<6;j++) cin >> A[i][j];
    }

    ll ans=1;
    for(int i=0;i<N;i++){
        ll d=0;
        for(int j=0;j<6;j++)d+=A[i][j];
        ans*=d;
        ans%=1000000007LL;
    }

    cout << ans << endl;

    return 0;
}