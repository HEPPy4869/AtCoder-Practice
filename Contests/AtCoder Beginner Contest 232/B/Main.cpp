#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    string S, T;
    cin >> S >> T;
    int d=T[0]-S[0];
    for(int i=1;i<int(S.size());i++){
        S[i]+=d;
        if(S[i]>'z') S[i]-=26;
        if(S[i]<'a') S[i]+=26;
        if(S[i]!=T[i]){cout << "No" << endl; return 0;}
    }
    cout << "Yes" << endl;
    return 0;
}