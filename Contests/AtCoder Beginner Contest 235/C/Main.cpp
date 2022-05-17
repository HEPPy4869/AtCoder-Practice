#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int N, Q;
    cin >> N >> Q;
    int a;
    map<int,vector<int>> mp;
    vector<pair<int,int>> ql(Q);

    for(int i=0;i<N;i++) {
        cin >> a;
        mp[a].push_back(i);
    }
    for(int i=0;i<Q;i++) cin >> ql[i].first >> ql[i].second;
    for(int i=0;i<Q;i++) {
        if(int(mp[ql[i].first].size())>=ql[i].second){
            cout << mp[ql[i].first][ql[i].second-1]+1 << endl;
        }
        else cout << -1 << endl;
    }

    return 0;

}