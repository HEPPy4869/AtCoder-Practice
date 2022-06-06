#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int Q;
    cin >> Q;
    multiset<int> st;
    for(int i=0;i<Q;i++){
        int q,x,c;
        cin >> q;
        if(q==1){
            cin >> x;
            st.insert(x);
        }
        else if(q==2){
            cin >> x >> c;
            while(c-- and st.find(x)!=st.end()){
                st.erase(st.find(x));
            }
        }
        else{
            cout << *st.rbegin()-*st.begin() << endl;
        }
    }
    
    return 0;
}