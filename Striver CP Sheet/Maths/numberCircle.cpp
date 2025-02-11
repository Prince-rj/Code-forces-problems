#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    long long arr[t];
    for(int i=0;i<t;i++)cin>>arr[i];
    sort(arr,arr+t);
    int temp=arr[t-1];
    arr[t-1]=arr[t-3];
    arr[t-3]=arr[t-2];
    arr[t-2]=temp;
    if((long long)(arr[t-3]+arr[t-1])<=arr[t-2])cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        for(int i=0;i<t-1;i++)cout<<arr[i]<<" ";
        cout<<arr[t-1]<<endl;
    }
    return 0;
}