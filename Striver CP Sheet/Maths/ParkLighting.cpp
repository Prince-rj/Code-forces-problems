#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        int n,m;
        
        cin>>n>>m;
        double no=n*m;
        no=no/2;
        int ans=ceil(no);
        cout<<ans<<endl;
    }
    return 0;
}