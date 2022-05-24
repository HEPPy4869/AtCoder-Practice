#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    string S;
    map<char, int> mp;
    cin >> S;
    int f1=0;
    int f2=0;
    for(char p:S){
        if(mp.find(p)!=mp.end()) {cout << "No" << endl; return 0;}
        mp[p] = 1;
        if(p>='A' && p<='Z') {
            f1=1;
        }
        if(p>='a' && p<='z') {
            f2=1;
        }
    }
    if(f1 && f2) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}