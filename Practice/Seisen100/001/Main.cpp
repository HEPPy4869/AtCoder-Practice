#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int n, x;
    while(true){
        cin >> n >> x;
        if(!n && !x) break;
        int c=0;
        for(int i=1;i<=n-2;i++){
            for(int j=i+1;j<=n-1;j++){
                for(int k=j+1;k<=n;k++)if(i+j+k==x) c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}