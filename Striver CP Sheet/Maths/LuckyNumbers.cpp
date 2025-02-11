#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    long long sum=0;
    for(int i=1;i<=t;i++){
        sum+=(long long)pow(2,i);
    }
    cout<<sum<<endl;
    return 0;
}