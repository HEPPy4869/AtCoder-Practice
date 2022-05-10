#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    string abc;
    cin >> abc;
    int bca = stoi(string({abc[1], abc[2], abc[0]}));
    int cab = stoi(string({abc[2], abc[0], abc[1]}));
    
    cout << stoi(abc) + bca + cab << endl;

    return 0;
}