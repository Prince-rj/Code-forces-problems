#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    long long m;
    cin>>n>>m;
    int ans=0;
    int d=m/n;
    if(m==n){cout<<0<<endl;return 0;}
    if(m%n!=0){cout<<-1<<endl;return 0;}
    while(d%2==0){
        ans++;
        d=d/2;
    }
    while(d%3==0){
        ans++;
        d=d/3;
    }
    if(d==1)cout<<ans<<endl;
    else cout<<-1<<endl;
    return 0;
}
