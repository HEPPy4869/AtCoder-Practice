#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve_with_vector(int Q){
    vector<int> a;
    for(int i=0;i<Q;i++){
        int t, x;
        cin >> t >> x;
        if(t==1) a.insert(a.begin(), x);
        else if(t==2) a.push_back(x);
        else cout << a[x-1] << endl;
    }
    return;
}

void solve_with_deque(int Q){
    deque<int> dq;
    for(int i=0;i<Q;i++){
        int t, x;
        cin >> t >> x;
        if(t==1) dq.push_front(x);
        else if(t==2) dq.push_back(x);
        else cout << dq[x-1] << endl;
    }
}

int main(){
    int Q;
    cin >> Q;
    solve_with_deque(Q);
    //solve_with_vector(Q);
    return 0;
}