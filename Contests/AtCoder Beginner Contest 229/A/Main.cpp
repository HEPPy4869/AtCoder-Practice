#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    string S1,S2;
    cin >> S1 >> S2;

    if(S1=="##"||S2=="##"||(S1[0]=='#'&&S2[0]=='#')||(S1[1]=='#'&&S2[1]=='#'))cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}