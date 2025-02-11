#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        int a,b,c;
        cin>>a>>b>>c;
        int sum=a+b+c;
        int pos=0;
        if(sum-a>=10)pos=1;
        if(sum-b>=10)pos=1;
        if(sum-c>=10)pos=1;
        if(pos)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}