#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll N;
    cin >> N;
    vector<ll> A(N);
    vector<ll> B(N);
    int c1=0, c2=0;
    for(int i=0;i<N;i++) cin >> A[i];
    for(int i=0;i<N;i++) cin >> B[i];

    for(int i=0;i<N;i++) {
        if(A[i]==B[i]) c1++;
        for(int j=0;j<N;j++){
            if(i!=j && A[i]==B[j]) c2++;
        }
    }
    cout << c1 << endl << c2 << endl;
}