#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        long n;
        cin>>n;
        long long arr[n-1];
        for(int i=0;i<n-1;i++){
            cin>>arr[i];
        }
        long long sum=((n)*(n+1))/2;
        if(arr[n-2]!=sum){
            bool flag=false;
            for(int i=1;i<=n;i++){
                int val=sum-i;
                if(arr[n-2]==val){
                    flag=true;
                    break;
                }
            }
            if(flag)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
    return 0;
}