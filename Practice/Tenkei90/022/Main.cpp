#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll A, B, C;
    cin >> A >> B >> C;

    ll d = gcd(gcd(A, B), C);
    ll ans = A/d-1 + B/d-1 + C/d-1;
    cout << ans << endl;
}