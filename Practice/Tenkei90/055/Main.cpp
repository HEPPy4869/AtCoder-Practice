#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int N, P, Q;
    cin >> N >> P >> Q;
    vector<ll> A(N);
    for(int i=0;i<N;i++) cin >> A[i];
    ll ans=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<i;j++){
            for(int k=0;k<j;k++){
                for(int l=0;l<k;l++){
                    for(int m=0;m<l;m++){
                        if(A[i]%P*A[j]%P*A[k]%P*A[l]%P*A[m]%P==Q) ans++;
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}