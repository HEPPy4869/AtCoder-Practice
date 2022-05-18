#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int N, M;
    cin >> N >> M;
    vector<vector<int>> x(N, vector<int>(N, false)), y(N, vector<int>(N, false));
    for(int i=0;i<M;i++){
        int a, b;
        cin >> a >> b;
        x[a-1][b-1] = x[b-1][a-1] = true;
    }
    for(int i=0;i<M;i++){
        int c, d;
        cin >> c >> d;
        y[c-1][d-1] = y[d-1][c-1] = true;
    }
    
    vector<int> p(N+1);
    for(int i=0;i<N;i++) p[i]=i;
    do{
        int f=true;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(x[i][j]!=y[p[i]][p[j]]) f=false;
            }
        }
        if(f) {cout << "Yes" << endl; return 0;}
    }while(next_permutation(p.begin(),p.end()));
    cout << "No" << endl;
}