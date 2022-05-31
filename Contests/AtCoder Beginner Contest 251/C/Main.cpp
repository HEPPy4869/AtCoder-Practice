#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int N;
    cin >> N;
    vector<string> S(N);
    vector<int> T(N);
    vector<pair<string,int>> x;
    for(int i=0;i<N;i++) cin >> S[i] >> T[i];
    map<string,int> mp;
    for(int i=0;i<N;i++){
        if(!mp.count(S[i])){
            mp[S[i]]=T[i];
            x.push_back(make_pair(S[i],i+1));
        }
        
    }
    int mx=0, ans=0;
    for(int i=0;i<int(x.size());i++){
        if(mp[x[i].first]>mx){
            mx=mp[x[i].first];
            ans=x[i].second;
            
        }
    }
    cout << ans << endl;

    return 0;
}