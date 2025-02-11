#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n+1];
    arr[0]=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int d=0;
    for(int i=1;i<n+1;i++){
        sum+=(arr[i-1]-arr[i]);
        if(sum<0){
            d-=sum;
            sum=0;
        }
    }
    cout<<d<<endl;
    return 0;
}