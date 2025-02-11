#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        long long n;
        cin>>n;
        long long sum=0;
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            sum+=x;
        }
        if(sum%2==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}