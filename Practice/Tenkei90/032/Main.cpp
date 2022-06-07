#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int N,M;
    cin >> N;
    vector<vector<int>> A(N,vector<int> (N));
    for(int i=0;i<N;i++) for(int j=0;j<N;j++) cin >> A[i][j];
    cin >> M;
    vector<vector<int>> b(N,vector<int> (N,0));
    for(int i=0;i<M;i++) {
        int x,y;
        cin >> x >> y;
        b[x-1][y-1]=1;
        b[y-1][x-1]=1;
    }

    vector<int> p(N);
    for(int i=0;i<N;i++) p[i]=i; //i区間を何番目の選手が走るか
    int ans=(1<<30);
    do{
        int sum=0; int flag=0;
        for(int i=0;i<N;i++){
            sum+=A[p[i]][i];
            if(i>0&&b[p[i-1]][p[i]]) flag=1;
        }
        if(!flag) ans=min(ans,sum);

    }while(next_permutation(p.begin(),p.end()));

    if(ans!=(1<<30))cout << ans << endl;
    else cout << -1 << endl;
    
    return 0;
}