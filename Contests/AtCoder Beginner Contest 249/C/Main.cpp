#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int N, K;
    cin >> N >> K;
    vector<string> S(N);
    map<char, int> mp;
    for(int i=0;i<N;i++) cin >> S[i];
    int max=0;
    for(int bit=0;bit<(1<<N);bit++){
        vector<int> c(26, 0);
        for(int i=0;i<N;i++){
            if((bit>>i)&1) for(char p:S[i]) c[p-'a']++;
        }
        int a=0;
        for(int i=0;i<26;i++) if(c[i]==K) a++;
        if(max<a)max=a;
    }
    cout << max << endl;
}