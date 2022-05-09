#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll N;
    cin >> N;
    ll of = (ll)1 << 31;
    if(N>=-of && N<of) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}