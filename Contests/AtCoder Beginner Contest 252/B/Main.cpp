#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int N,K;
    cin >> N >> K;
    vector<int> A(N), B(K);
    vector<int> x;
    for(int i=0;i<N;i++) cin >> A[i];
    for(int i=0;i<N;i++) cin >> B[i];

    int mx=0;
    for(int i=0;i<N;i++)mx=max(mx,A[i]);
    for(int i=0;i<N;i++)if(mx==A[i]) x.push_back(i);
    for(int i=0;i<int(x.size());i++){
        for(int j=0;j<K;j++){
            if(x[i]==B[j]-1){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;

    return 0;
}