#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        int x,y,z;
        cin>>x>>y>>z;
        int Max=max(max(x,y),z);
        if(x==y&&y==z){
            cout<<"YES"<<endl;
            cout<<Max<<" "<<Max<<" "<<Max<<endl;
        }
        else if(x==Max&&y==Max){
            cout<<"YES"<<endl;
            cout<<z<<" "<<Max<<" "<<z<<endl;
        }
        else if(x==Max&&z==Max){
            cout<<"YES"<<endl;
            cout<<Max<<" "<<y<<" "<<y<<endl;
        }
        else if(y==Max&&z==Max){
            cout<<"YES"<<endl;
            cout<<x<<" "<<x<<" "<<Max<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}