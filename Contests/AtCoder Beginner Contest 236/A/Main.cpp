#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    string S;
    int a, b;
    cin >> S >> a >> b;
    swap(S[a-1], S[b-1]);
    cout << S << endl;
}