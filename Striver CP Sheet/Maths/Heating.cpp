#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        long long c,sum;
        cin>>c>>sum;
        long long ans=0;
        if(sum==1){
            cout<<1<<endl;
            continue;
        }
        while(c>0){
            int d=sum/c;
            ans+=(d*d);
            sum-=d;
            c--;
        }
        cout<<ans<<endl;
    }
    return 0;
}