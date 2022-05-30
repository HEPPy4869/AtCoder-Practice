#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int N,Q;
    cin >> N >> Q;
    vector<int> x(Q);
    vector<int> val(N+1), pos(N+1);
    for(int i=1;i<=N;i++)val[i]=i, pos[i]=i;
    for(int i=0;i<Q;i++) cin >> x[i];
    for(int i=0;i<Q;i++){
        int p0=pos[x[i]];
        int p1=p0;
        if(p0!=N) p1++;
        else p1--;
        int v0=val[p0];
        int v1=val[p1];
        swap(val[p0],val[p1]);
        swap(pos[v0],pos[v1]);
    }
    for(int i=1;i<=N;i++) cout << val[i] << " ";
    cout << endl;
    return 0;
}