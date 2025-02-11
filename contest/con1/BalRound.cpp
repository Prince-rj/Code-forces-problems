#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        int n;
        cin>>n;
        int k;
        cin>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int count=0;
        int prev=arr[n-1];
        for(int i=n-2;i>=0;i--){
            if(prev-arr[i]>k){
                count++;
            }
            else{
                prev=arr[i];
            }
        }
        cout<<count;
    }
    return 0;
}