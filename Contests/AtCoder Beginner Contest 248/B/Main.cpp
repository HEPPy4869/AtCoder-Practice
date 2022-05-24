#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll A, B, K;
    cin >> A >> B >> K;
    int ans=0;
    while(A<B){
        A*=K;
        ans++;
    }
    cout << ans << endl;
    return 0;
}