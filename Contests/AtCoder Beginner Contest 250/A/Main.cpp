#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int H,W,R,C;
    cin >> H >> W >> R >> C;
    int ans=4;
    if((R+1)>H)ans--;
    if((R-1)<1)ans--;
    if((C+1)>W)ans--;
    if((C-1)<1)ans--;
    cout << ans << endl;
    return 0;
}