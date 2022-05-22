#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    string S;
    cin >> S;
    for(int i=3;i>0;i--)S[i]=S[i-1];
    S[0]='0';
    cout << S << endl;
    return 0;
}