#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int N;
    cin >> N;
    vector<vector<int>> S(N+1);
    S[1]={1};
    for(int i=2;i<N+1;i++){
        vector<int> tmp = {i};
        tmp.insert(tmp.end(), S[i-1].begin(), S[i-1].end());
        tmp.insert(tmp.begin(), S[i-1].begin(), S[i-1].end());
        S[i] = tmp;
    }

    for(int i=0;i<int(S[N].size());i++) cout << S[N][i] << " ";
    cout << endl;
    return 0;
}