#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int A, B, C, D, E, F, X;
    cin >> A >> B >> C >> D >> E >> F >> X;
    int t=0;
    int a=0;
    int c=0;
    while(c<X){
        for(int i=0;i<A;i++){
            t+=B;
            c++;
            if(c==X)break;
        }
        c+=C;
    }
    c=0;
    while(c<X){
        for(int i=0;i<D;i++){
            a+=E;
            c++;
            if(c==X)break;
        }
        c+=F;
    }
    if(t<a) cout << "Aoki" << endl;
    else if(a<t) cout << "Takahashi" << endl;
    else cout << "Draw" << endl;

    return 0;
}