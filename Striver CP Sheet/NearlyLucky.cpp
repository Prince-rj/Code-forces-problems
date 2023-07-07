#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    int l=0;
    while(n>0){
        int digit=n%10;
        if(digit==4||digit==7)l++;
        n=n/10;
    }
    if(l==4||l==7)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}