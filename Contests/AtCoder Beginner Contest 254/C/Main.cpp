#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    vector<vector<int>> A_c(K);
    for(int i=0;i<N;i++) cin >> A[i];

    for(int i=0;i<N;i++){
        A_c[i%K].push_back(A[i]);
    }

    for(int i=0;i<K;i++) sort(A_c[i].begin(),A_c[i].end());

    vector<int> ansv(N);
    for(int i=0;i<N;i++){
        ansv[i]=A_c[i%K][i/K];
    }
    for(int i=0;i<N-1;i++){
        if(ansv[i]>ansv[i+1]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    
    return 0;
}