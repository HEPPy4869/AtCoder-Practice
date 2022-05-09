#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int N, M;
    cin >> N >> M;
    vector<string> S(N);
    vector<string> T(M);
    for(int i=0;i<N;i++) cin >> S[i];
    for(int i=0;i<M;i++) cin >> T[i];

    set<string> st(T.begin(), T.end());
    for(int i=0;i<N;i++){
        if(st.count(S[i])) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}