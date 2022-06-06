#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int N;
    map<string,int> mp;
    cin >> N;
    for(int i=0;i<N;i++){
        string v; cin >> v;
        mp[v]+=1;
    }

    string ans; int max=0;
    for(auto [k,v]:mp){
        if(max<v){
            ans=k;
            max=v;
        }
    }
    cout << ans << endl;
    
    return 0;
}