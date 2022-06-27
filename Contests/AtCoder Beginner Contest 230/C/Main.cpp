#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll N,A,B,P,Q,R,S;
    cin >> N >> A >> B >> P >> Q >> R >> S;

    for(ll i=P;i<=Q;i++){
        for(ll j=R;j<=S;j++){
            ll h=B-j;
            if(A+h==i)cout << "#";
            else if(A-h==i)cout << "#";
            else cout << ".";
        }
        cout << endl;
    }

    return 0;
}