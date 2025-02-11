#include <bits/stdc++.h>
using namespace std;
// (x+h)^2-x^2=L^2
// x=(L^2-h^2)/2h

int main(){
    double l,h;
    cin>>h>>l;
    cout<<setprecision(13)<<((l*l)-(h*h))/(2*h)<<endl;
    return 0;
}