#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int N;
    cin >> N;
    vector<int> A(N+2);
    vector<int> X(N+2);
    for(int i=1;i<=N;i++)cin >> A[i];
    X[0] = 0;
    X[N+1] = 360;
    for(int i=1;i<=N;i++){
        if(A[i]+X[i-1]<=360) X[i] = X[i-1] + A[i];
        else {
            X[i] = X[i-1] + A[i] - 360;
        }
    }
    sort(X.begin(), X.end());
    int ans = 0;
    for(int i=0;i<=N;i++){
        if(X[i+1]-X[i]>ans){
            ans = X[i+1]-X[i];
        }
    }
    cout << ans << endl;
}