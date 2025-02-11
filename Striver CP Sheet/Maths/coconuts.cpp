#include <bits/stdc++.h>
using namespace std;

int main(){
    long long x,y,z;
    cin>>x>>y>>z;
    long long sum=x+y;
    cout<<(sum)/z<<" ";
    if((x%z==0)||(y%z==0)){
        cout<<0<<endl;
        return 0;
    }
    long long a=z*((x/z)+1) -x;
    long long b=z*((y/z)+1)-y;
    if((a>y%z)&&(b>x%z))cout<<0<<endl;
    else cout<<min(a,b)<<endl;
    return 0;
}