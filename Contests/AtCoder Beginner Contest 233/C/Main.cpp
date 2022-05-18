#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll ans;
ll N, X;
ll L;
vector<vector<int>> a;

void dfs(ll pos, ll seki){
    if(pos==N){
        if(seki==X)ans++;
        return;
    }
    for(ll c:a[pos]){
        if(seki>X/c) continue;
        dfs(pos+1, seki*c);
    }
}

int main(){
    cin >> N >> X;
    a.resize(N);
    for(ll i=0;i<N;i++){
        cin >> L;
        a[i].resize(L);
        for(ll j=0;j<L;j++) cin >> a[i][j];
    }

    dfs(0, 1);
    cout << ans << endl;
    return 0;
}