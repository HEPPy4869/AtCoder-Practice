#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll A, B;
    cin >> A >> B;

    while(A>0&&B>0){
        int a=A%10;
        int b=B%10;
        if(a+b>=10){cout << "Hard" << endl; return 0;}
        A/=10LL;
        B/=10LL;
    }

    cout << "Easy" << endl;
    
    return 0;
}