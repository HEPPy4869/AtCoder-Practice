#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int N, K;
    cin >> N >> K;
    vector<int> A(N), B(N);

    for(int i=0;i<N;i++) cin >> A[i];
    for(int i=0;i<N;i++) cin >> B[i];

    int d=0;
    for(int i=0;i<N;i++)d+=abs(A[i]-B[i]);
    if(d>K)cout << "No" << endl;
    else if((K-d)%2==0) cout << "Yes" << endl;
    else cout << "No" << endl;
}