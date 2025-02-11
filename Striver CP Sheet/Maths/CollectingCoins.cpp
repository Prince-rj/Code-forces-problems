#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        int m=max(a,max(b,c));
        int diff=m*3-(a+b+c);
        n=n-diff;
        if(n>=0&&n%3==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}