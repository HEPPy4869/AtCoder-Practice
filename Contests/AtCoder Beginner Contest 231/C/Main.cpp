#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int N,Q;
    cin >> N >> Q;
    vector<int> A(N);
    for(int i=0;i<N;i++) cin >> A[i];
    sort(A.begin(),A.end());

    for(int i=0;i<Q;i++){
        int q;
        cin >> q;
        auto x=lower_bound(A.begin(),A.end(),q);
        cout << A.end()-x << endl;
    }

    return 0;
}