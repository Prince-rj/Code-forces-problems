#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,s;
    cin>>a>>b>>s;
    a=abs(a);
    b=abs(b);
    long long remain=s-(a+b);
    if(remain>=0&&remain%2==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}