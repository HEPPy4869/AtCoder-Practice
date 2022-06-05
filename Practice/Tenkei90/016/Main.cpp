#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll N,A,B,C;
    cin >> N >> A >> B >> C;
    ll ans=10000;
    for(ll i=0;i<9999;i++){
        for(ll j=0;j<9999;j++){
            ll k=N-1LL*(A*i+B*j);
            if(k>=0&&k%C==0){
                ll p=A*i+B*j+k;
                ll q=i+j+k/C;
                if(p==N&&(i+j+k/C<=9999)) ans=min(ans,q);
            }
        }
    }
    cout << ans << endl;
    return 0;
}