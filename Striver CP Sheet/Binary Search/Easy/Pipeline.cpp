#include <bits/stdc++.h>
using namespace std;
long long sum(long long k){
    return ((k*(k+1))/2)+1;
}
int main(){
    long long n;
    long long k;
    cin>>n>>k;
    long long s=sum(k-1);
    if(s<n){
        cout<<-1<<endl;
    }
    else{
        long long i=0;
        long long j=k-1;
        int ans=0;
        while(i<=j){
            long long mid=(i+j)/2;
            if((s-sum(mid)+1)>=n){
                ans=k-mid-1;
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}