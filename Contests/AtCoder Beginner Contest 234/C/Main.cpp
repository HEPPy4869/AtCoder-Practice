#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll K;
    cin >> K;
    
    string ans;
    while(K>0){
        ans.push_back('0'+K%2);
        K/=2;
    }
    for(int i=0;i<int(ans.size());i++){
        if(ans[i]=='1')ans[i]='2';
    }
    reverse(ans.begin(),ans.end());

    cout << ans << endl;
}