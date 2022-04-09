#include <bits/stdc++.h>

using namespace std;

int main(){
    int A;
    int B;
    cin >> A >> B;
    double d = sqrt(A*A+B*B);
    cout << setprecision(12) << A/d << " " << B/d << endl;
}