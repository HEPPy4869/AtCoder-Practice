#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    vector<ll> a = {x1, y1};
    vector<ll> b = {x2, y2};
    vector<vector<ll>> root = {{2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2},{1,-2},{2,-1}};
    vector<vector<ll>> ar(8, vector<ll>(2));
    vector<vector<ll>> br(8, vector<ll>(2));
    for(ll i=0;i<8;i++){
        for(ll j=0;j<2;j++){
            ar[i][j] = a[j] + root[i][j];
            br[i][j] = b[j] + root[i][j];
        }
    }
    for(ll i=0;i<8;i++){
        for(ll j=0;j<8;j++){
            ll c=0;
            for(ll k=0;k<2;k++){
                if(ar[i][k]==br[j][k]) c++;
            }
            if(c==2){cout << "Yes" << endl; return 0;}
        }
    }
    cout << "No" << endl;
    return 0;
}