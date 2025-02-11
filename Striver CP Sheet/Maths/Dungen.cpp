#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        long long a,b,c;
        cin>>a>>b>>c;
        long long rem=(a+b+c)/9;
        if((a+b+c)%9==0&&min(a,min(b,c))>=rem)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}