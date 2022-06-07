#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll A, B, C;
    cin >> A >> B >> C;

    ll d=1;
    for(ll i=0;i<B;i++) d*=C;

    if(A<d) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}