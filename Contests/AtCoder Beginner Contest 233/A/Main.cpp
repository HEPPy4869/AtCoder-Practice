#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int X, Y;
    cin >> X >> Y;
    if(X>=Y) cout << 0 << endl;
    else cout << ceil(double(Y-X)/10) << endl;
}