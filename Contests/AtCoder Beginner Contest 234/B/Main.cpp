#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int N;
    cin >> N;
    vector<pair<int,int>> xy(N);
    for(int i=0;i<N;i++) cin >> xy[i].first >> xy[i].second;
    double mx=0.0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i!=j){
                int x=xy[i].first-xy[j].first;
                int y=xy[i].second-xy[j].second;
                mx = max(mx, sqrt(double(x*x+y*y)));
            }
        }
    }
    cout << setprecision(12) << mx << endl;
}