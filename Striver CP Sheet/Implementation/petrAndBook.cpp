#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[7];
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }
    int sum=0;
    int ans=0;
    for(int i=0;i<7;){
        sum+=arr[i];
        if(sum<n){
            if(i==6)i=0;
            else i++;
        }
        if(sum>=n){
            ans=i;
            break;
        }
    }
    cout<<ans+1<<endl;
    return 0;
}