#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll N,W;
    cin >> N >> W;
    vector<pair<ll,ll>> ab(N);
    for(auto &x:ab) cin >> x.first >> x.second;

    sort(ab.begin(), ab.end());
    reverse(ab.begin(), ab.end());

    ll ans=0;
    for(int i=0;i<N;i++){
        ll w=min(ab[i].second,W);
        W-=w;
        ans+=ab[i].first*w;
        if(!W) break;
    }

    cout << ans << endl;

    return 0;
}