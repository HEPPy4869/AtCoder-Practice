#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    N = 2*N+1;
    vector<int> x(N+1, true);

    while(true){
        for(int i=1;i<=N;i++){
            if(x[i]){
                cout << i << endl;
                x[i]=false;
                break;
            }
        }
        int t;
        cin >> t;
        if(t==0)break;
        x[t]=false;

    }
    return 0;
}