#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int N;
    cin >> N;
    vector<int> A(4*N-1);
    vector<int> c(N, 4);
    for(int i=0;i<4*N-1;i++) cin >> A[i];
    for(int i=0;i<4*N-1;i++){
        c[A[i]-1]--;
    }
    for(int i=0;i<N;i++){
        if(c[i]==1) cout << i+1 << endl;
    }
    return 0;
}