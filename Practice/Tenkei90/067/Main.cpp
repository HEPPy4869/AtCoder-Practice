#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll base8_to_ll(string N){
    ll ans=0, u=1;
    for(int i=int(N.size())-1;i>=0;i--){
        ans+=1LL*(N[i]-'0')*u;
        u*=8;
    }
    return ans;
}

string ll_to_base9(ll N){
    if(N==0) return "0";
    string ans;
    while(N>0){
        char c=((N%9)+'0');
        ans=c+ans;
        N/=9;
    }
    return ans;
}

int main(){
    string N;
    int K;
    cin >> N >> K;
    for(int i=0;i<K;i++){
        N=ll_to_base9(base8_to_ll(N));
        for(int i=0;i<int(N.size());i++){
            if(N[i]=='8') N[i]='5';
        }
    }
    cout << N << endl;
    return 0;
}