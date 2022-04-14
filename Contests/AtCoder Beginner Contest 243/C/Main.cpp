#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll N;
    cin >> N;
    vector<ll> X(N);
    vector<ll> Y(N);
    string S;
    map<ll, vector<ll>> mp;

    for(ll i=0;i<N;i++) cin >> X[i] >> Y[i];
    cin >> S;

    for(ll i=0;i<N;i++) mp[Y[i]].push_back(i);
    for(auto p : mp){
        vector<ll> ids = p.second;
        vector<pair<ll, char>> ps;
        for(ll i : ids){
            ps.emplace_back(X[i], S[i]);
        }
        sort(ps.begin(), ps.end());
        for(ll i=0;i<ps.size()-1;i++){
            if(ps[i].second == 'R' && ps[i+1].second == 'L'){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}