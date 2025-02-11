#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long sum=0;
    for(int i=1;i<n;i++){
        sum+=((n-i)*i)+1;
    }
    cout<<sum+1<<endl;
    return 0;
}