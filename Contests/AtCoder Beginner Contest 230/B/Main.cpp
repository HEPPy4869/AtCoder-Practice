#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    string S;
    cin >> S;

    string t="oxx";

    for(string t:{"oxx","xox","xxo"}){
        int f=true;
        for(int i=0;i<S.size();i++){
            if(t[i%3]!=S[i])f=false;
        }
        if(f){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}