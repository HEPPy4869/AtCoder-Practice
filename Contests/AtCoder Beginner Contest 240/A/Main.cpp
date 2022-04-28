#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int A, B;
    cin >> A >> B;
    if(A-1==B || A+1==B) cout << "Yes" << endl;
    else if((A==1&&B==10) || (A==10&&B==1)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}