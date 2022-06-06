#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define PI 3.14159265359

int main(){
    double T,L,Q;
    double X,Y;
    cin >> T >> L >> X >> Y >> Q;
    double r=L/2.0;
    for(int i=0;i<Q;i++) {
        double E;
        cin >> E;
        double theta=360.0*(E/T);
        double py=-1*r*sin(PI*theta/180.0),pz=r-(1*r*cos(PI*theta/180.0));
        double a=sqrt(X*X+(py-Y)*(py-Y));
        cout << setprecision(12) << atan2(pz,a)*180/PI << endl;
    }

    return 0;

}