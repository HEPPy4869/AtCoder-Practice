#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int N;
    cin >> N;
    for(int bit=0;bit<(1<<N);bit++){
        int c=0;
        for(int i=0;i<N;i++){
            if((bit>>i)&1) c++;
            else c--;
            if(c<0) break;
        }
        if(!c){
            string ans;
            for(int i=N-1;i>=0;i--){
                if((bit>>i)&1) ans+=')';
                else ans+='(';
            }
            cout << ans << endl;
        }
    }
    return 0;
}