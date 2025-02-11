#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        int n,m;
        cin>>n>>m;
        int ans;
        if(n==1)ans=0;
        else if(n==2)ans=m;
        else ans=m*2;
        cout<<ans<<endl;
    }
    return 0;
}