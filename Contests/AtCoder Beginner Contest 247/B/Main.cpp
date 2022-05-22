#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int N;
    map<string, int> mp;
    cin >> N;
    string s, t;
    vector<string> S(N), T(N);
    for(int i=0;i<N;i++){
        cin >> s >> t;
        S[i]=s;
        T[i]=t;
        mp[s]+=1;
        mp[t]+=1;
    }
    for(int i=0;i<N;i++){
        if((mp[S[i]]==1)||(mp[T[i]]==1))continue;
        else if(mp[S[i]]==2&&S[i]==T[i]) continue; 
        else {cout << "No" << endl; return 0;}
    }
    cout << "Yes" << endl;
    return 0;
}