#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    map<int, int> mp;
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i=0;i<N;i++) cin >> a[i];
    for(int i=0;i<N;i++) {
        if(!mp[a[i]]) mp[a[i]] = true;
    }
    cout << mp.size() << endl;
}