#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);

    for(int i=0;i<N;i++) cin >> A[i];
    int ans = 0;
    while(ans<=2000){
        for(int i=0;i<N;i++){
            if(ans==A[i]) break;
            else if(i==N-1){
                cout << ans << endl;
                return 0;
            }
        }
        ans++;
    }
    cout << ans << endl;
}