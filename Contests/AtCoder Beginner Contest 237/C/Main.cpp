#include <bits/stdc++.h>

using namespace std;

typedef long long ll;



int main(){
    string S;
    cin >> S;
    int fa=0;
    int ba=0;
    for(int i=0;i<(int)S.size();i++){
        if(S[i]=='a') fa++;
        else break;
    }
    for(int i=(int)S.size()-1;i>=0;i--){
        if(S[i]=='a') ba++;
        else break;
    }
    if(fa<ba) {
        for(int i=fa;i<(int)(S.size()-ba+fa)/2;i++){
            if(S[i]!=S[(S.size()-ba+fa)-i-1]) {
                cout << "No" << endl;
                return 0;
            }
        }
        cout << "Yes" << endl;
        return 0;
    }
    for(int i=0;i<(int)S.size()/2;i++){
        if(S[i]!=S[S.size()-i-1]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}