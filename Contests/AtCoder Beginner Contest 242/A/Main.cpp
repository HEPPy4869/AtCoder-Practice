#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    double A, B, C, X;
    cin >> A >> B >> C >> X;
    if (A>=X) cout << setprecision(11) << 1.0 << endl;
    else if(B>=X) cout <<  setprecision(11) << C/(B-A) << endl;
    else cout << setprecision(11) << 0.0 << endl;
    return 0;
}