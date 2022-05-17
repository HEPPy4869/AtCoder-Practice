#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int N;
    cin >> N;
    vector<int> H(N);
    for(int i=0;i<N;i++) cin >> H[i];

    int ans=H[0];
    for(int i=0;i<N-1;i++){
        if(H[i]>=H[i+1]) break;
        ans = H[i+1];
    }

    cout << ans << endl;
    return 0;
}