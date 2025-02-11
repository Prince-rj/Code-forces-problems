#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        int n;
        cin>>n;
        int ans=0;
        if(n%2==0){
            ans=n/2;
        }
        else ans=(n+1)/2;
        cout<<ans<<endl;
    }
    return 0;
}