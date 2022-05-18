#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int  N;
    cin >> N;
    vector<string> S(N);
    map<string, int> mp;
    for(int i=0;i<N;i++) cin >> S[i];
    for(int i=0;i<N;i++){
        if(mp[S[i]]==NULL){ mp[S[i]]=true; cout << i+1 << endl;}
    }
    return 0;
}