#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int N;
    cin >> N;
    vector<vector<int>> A(N);
    for(int i=0;i<N;i++){
        A[i].resize(i+1);
        A[i][0]=1;
        A[i][i]=1;
        for(int j=1;j<A[i].size()-1;j++){
            A[i][j]=A[i-1][j-1]+A[i-1][j];
        }
        for(int j=0;j<A[i].size();j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}