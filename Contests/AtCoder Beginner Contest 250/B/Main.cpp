#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int N,A,B;
    cin >> N >> A >> B;

    for(int i=0;i<N;i++){
        for(int j=0;j<A;j++){
            for(int k=0;k<N;k++){
                for(int l=0;l<B;l++){
                    int c=0;
                    if(i%2)c++;
                    if(k%2)c++;
                    if(c==0||c==2)cout << '.';
                    else cout << '#';
                }
            }
            cout << endl;
        }
    }

    return 0;
}