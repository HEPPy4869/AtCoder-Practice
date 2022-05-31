#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int N,Q;
    cin >> N;
    vector<int> A(N);
    for(int i=0l;i<N;i++) cin >> A[i];
    cin >> Q;
    vector<int> B(Q);
    for(int i=0;i<Q;i++) cin >> B[i];
    sort(A.begin(),A.end());
    for(int i=0;i<Q;i++){
        auto pos=lower_bound(A.begin(),A.end(),B[i]);
        int idx=distance(A.begin(),pos);
        int diff1=1000000000, diff2=diff1;
        if(idx<=N) diff1=abs(B[i]-A[idx]);
        if(idx>=1) diff2=abs(B[i]-A[idx-1]);
        //cout << diff1 << " " <<  diff2 << endl;
        cout << min(diff1, diff2) << endl;
    }

    return 0;
}