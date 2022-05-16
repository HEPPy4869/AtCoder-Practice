#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int H, W;
    cin >> H >> W;
    vector<vector<int>> A(H, vector<int>(W));
    vector<int> h(H, 0);
    vector<int> w(W, 0);
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++) cin >> A[i][j];
    }

    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++) w[j]+= A[i][j];
    }
    for(int i=0;i<W;i++){
        for(int j=0;j<H;j++) h[j]+= A[j][i];
    }

    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++) cout << w[j]+h[i]-A[i][j] << " ";
        cout << endl;
    }
}