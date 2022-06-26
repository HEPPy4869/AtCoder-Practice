#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int N, Q, T;
vector<int> A;
int x, y;
int shift=0;

int get_shifted(int n){
    n=n-shift;
    while(n<0){
        n=n+A.size();
    }
    return n;
}

int main(){
    cin >> N >> Q;
    A.resize(N);
    for(int i=0;i<N;i++) cin >> A[i];

    
    for(int i=0;i<Q;i++){
        cin >> T;
        cin >> x >> y;
        x=x-1;y=y-1;
        if(T==1){
            swap(A[get_shifted(x)], A[get_shifted(y)]);
        }
        else if(T==2){
            shift++;
        }
        else if(T==3){
            cout << A[get_shifted(x)] << endl;
        }
        //for(int i=0;i<N;i++) cout << A[i] << " ";
        //cout << endl;
    }

    return 0;
}