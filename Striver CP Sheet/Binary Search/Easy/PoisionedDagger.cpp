#include <bits/stdc++.h>
using namespace std;
bool isPossible(long long mid,long long* arr,long long h,long long  n){
    for(int i=0;i<n;i++){
        // cout<<arr[i]<<" ";
        // <<h<<" "<<endl;
        long long val=mid;
        if(i!=n-1)val=min(val,arr[i+1]-arr[i]);
        h-=val;
    }
    return h<=0;
}
int main(){
    long long t;
    cin>>t;
    while(t>0){
        long long n,h;
        cin>>n>>h;
        long long arr[n];
        for(long long i=0;i<n;i++){
            cin>>arr[i];
        }
        long long l=0;
        long long x=h;
        long long ans=0;
        while(l<=x){
            long long mid=l+(x-l)/2;
            // cout<<mid<<endl;
            if(isPossible(mid,arr,h,n)){
                ans=mid;
                x=mid-1;
            }
            else{
                l=mid+1;
            }
            // cout<<ans<<endl;
        }
        cout<<ans<<endl;
        t--;
    }
    return 0;
}
