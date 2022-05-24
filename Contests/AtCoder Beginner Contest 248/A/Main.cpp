#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    string S;
    cin >> S;
    vector<int> n(S.length());
    for(int i=0;i<S.length();i++) n[i]=S[i]-'0';
    for(int i=0;i<10;i++) if(find(n.begin(),n.end(),i)==n.end()) cout << i << endl;
    return 0;
}