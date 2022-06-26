#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll A, B;
    cin >> A >> B;

    ll l = B/gcd(A,B);
    if(l>1000000000000000000LL/A) cout << "Large" << endl;
    else cout << l*A << endl;

    return 0;
}