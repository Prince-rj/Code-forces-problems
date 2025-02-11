#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        long long n,k;
        cin>>n>>k;
        if(n>k)k=(long long)ceil((double)n/k)*k;
        cout<<(long long)ceil((double)k/n)<<endl;
    }
    return 0;
}