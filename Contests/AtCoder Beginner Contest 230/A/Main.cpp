#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int N;
    cin >> N;

    if(N>=42) N++;

    cout << "AGC";
    int c;
    if(N>=10)c=2;
    else c=1;
    for(int i=0;i<3-c;i++) cout << "0";
    cout << N << endl;

    return 0;
}