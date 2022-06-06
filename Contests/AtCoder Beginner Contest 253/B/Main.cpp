#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int H,W;
    cin >> H >> W;
    vector<string> S(H);
    for(int i=0;i<H;i++) cin >> S[i];

    vector<pair<int,int>> p;
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            if(S[i][j]=='o') p.push_back(make_pair(i,j));
        }
    }

    cout << abs(p[0].first-p[1].first)+abs(p[0].second-p[1].second) << endl;
    
    return 0;
}