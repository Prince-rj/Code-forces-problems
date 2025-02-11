#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        int n,x;
        cin>>n>>x;
        if(n<=2){
            cout<<1<<endl;
            continue;
        }
        n=n-2;
        double f=(double)n/x;
        int ans=ceil(f);
        cout<<ans+1<<endl;
    }
    return 0;
}