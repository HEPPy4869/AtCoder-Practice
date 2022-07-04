#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int N,K;
    cin >> N >> K;
    vector<int> C;

    for(int i=0;i<N;i++){
        int a, b;
        cin >> a >> b;
        C.push_back(b);
        C.push_back(a-b);
    }

    sort(C.begin(),C.end(),greater<int>());
    ll ans=0;
    for(auto x:C){
        ans+=x;
        K--;
        if(K<=0){
            cout << ans << endl;
            return 0;
        }
    }

    cout << ans << endl;

    return 0;

}