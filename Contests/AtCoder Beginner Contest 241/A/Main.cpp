#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int a[10];
    int ans;
    for(int i=0;i<10;i++) cin >> a[i];
    ans = 0;
    for(int i=0;i<3;i++) ans = a[ans];
    cout << ans << endl;
    return 0;
}