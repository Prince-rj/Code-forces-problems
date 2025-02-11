#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        int x,y,n;
        cin>>x>>y>>n;
        int div=n/x;
        int num=(x*div)+y;
        if(num<=n){
            cout<<num<<endl;
        }
        else{
            num=(x*(div-1)+y);
            cout<<num<<endl;
        }
    }
    return 0;
}