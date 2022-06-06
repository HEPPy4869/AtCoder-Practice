#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll sum(ll i){
    return 1LL*(1+i)*i/2;
}

int main(){
    ll N,A,B;
    cin >> N >> A >> B;

    ll c=lcm(A,B);
    ll ans=sum(N)-sum(N/A)*A-sum(N/B)*B+sum(N/c)*c;
    cout << ans << endl;

    return 0;
}