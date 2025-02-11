#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        long long a,b;
        cin>>a>>b;
        if(a==b||b<a){
            cout<<"YES"<<endl;
        }
        else if(a>=1&&a<=3){
            if(a==2&&b==3)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        
    }
    return 0;
}