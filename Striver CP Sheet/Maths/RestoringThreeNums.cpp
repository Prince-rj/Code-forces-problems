#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z,s;
    cin>>x>>y>>z>>s;
    int p,q,r;
    int sum;
    if(x>y&&x>z&&x>s){
        p=y;
        q=z;
        r=s;
        sum=x;
    }
    if(y>x&&y>z&&y>s){
        p=x;
        q=z;
        r=s;
        sum=y;
    }
    if(z>y&&z>x&&z>s){
        p=y;
        q=x;
        r=s;
        sum=z;
    }
    if(s>y&&s>z&&s>x){
        p=y;
        q=z;
        r=x;
        sum=s;
    }
    int a=sum-p;
    int b=sum-q;
    int c=sum-r;
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}