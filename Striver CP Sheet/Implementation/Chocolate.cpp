#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long sum=arr[n-1];
    for(int i=n-2;i>=0;i--){
        int x=min(arr[i+1]-1,arr[i]);
        if(x<0)x=0;
        arr[i]=x;
        sum+=x;
    }
    cout<<sum<<endl;
    return 0;
}