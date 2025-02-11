#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        long long a,b;
        cin>>a>>b;
        long long c=abs(a-b);
        double x=(double)c/10;
        long long ans=ceil(x);
        cout<<ans<<endl;
    }
    
    return 0;
}