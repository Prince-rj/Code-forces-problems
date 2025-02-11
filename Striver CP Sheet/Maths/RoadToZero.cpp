#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        long long x,y;
        long long a,b;
        cin>>x>>y;
        cin>>a>>b;
        long long sum=0;
        long long diff=abs(x-y);
        sum+=diff*a;
        sum+=min(min(x,y)*b,2*min(x,y)*a);
        cout<<sum<<endl;
        
    }
    return 0;
}