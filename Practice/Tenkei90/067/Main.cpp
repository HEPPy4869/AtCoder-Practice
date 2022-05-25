#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    string N;
    int K;
    cin>>N>>K;
    for(int i=0;i<K;i++){
        ll A=0;
        for(char c:N)A=A*8+c-'0';
        N="";
        for(;A;A/=9)N+=(char)(A%9+'0');
        reverse(N.begin(),N.end());
        for(char&c:N){
            if(c=='8')c='5';
        }
        if(N=="")N="0";
    }
    cout<<N<<endl;

}