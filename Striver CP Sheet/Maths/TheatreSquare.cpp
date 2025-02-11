#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,c;
    cin>>a>>b>>c;
    long long x=ceil((double)a/c);
    long long y=ceil((double)b/c);
    cout<<x*y<<endl;
    return 0;
}