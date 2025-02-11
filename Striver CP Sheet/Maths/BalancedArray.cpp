#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        int n;
        cin>>n;
        if(n%4==0){
            cout<<"YES"<<endl;
            int x=n/2;
            int val=2;
            for(int i=1;i<=x;i++){
                cout<<val<<" ";
                val+=2;
            }
            val=1;
            for(int i=1;i<x;i++){
                cout<<val<<" ";
                val+=2;
            }
            cout<<val+(x)<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}