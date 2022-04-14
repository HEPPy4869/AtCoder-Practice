#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    string T;
    cin >> N >> T;
    int d=0;
    int x=0, y=0;
    for(int i=0;i<T.length();i++){
        if(T[i]=='S'){
            if(d==0) x+=1;
            else if(d==1) y-=1;
            else if(d==2) x-=1;
            else if(d==3) y+=1;
        }
        else if(T[i]=='R'){
            d+=1;
            if(d>=4) d=0;
        }
    }
    cout << x << " " << y << endl;
    return 0;
}