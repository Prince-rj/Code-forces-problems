#include <bits/stdc++.h>
using namespace std;



long long help(long long arr[],int i,int j,int k,vector<vector<vector<long long>>> dp,int n){
    if(k==0)return 0;
    if(i==n-1||j<0)returnk (long long)1e20;
    if(dp[i][j][k]!=-1)return dp[i][j][k];
    //front
    long long op1=(arr[i]+arr[i+1])+help(arr,i+2,j,k-1,dp,n);
    //back
    long long op2=arr[j]+help(arr,i,j-1,k-1,dp,n);
    return dp[i][j][k]=min(op1,op2);
}


long long solve(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    long long arr[n];
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    vector<vector<vector<long long>>> dp;
    for(int i=0;i<n;i++){
        vector<vector<long long>> v;
        for(int j=0;j<n;j++){
            vector<long long> ve;
            for(int x=0;x<=k;x++){
                ve.push_back(-1);
            }
            v.push_back(ve);
        }
        dp.push_back(v);
    }
    long long val=help(arr,0,n-1,k,dp,n);
    if(val>sum)return 0;
    else return sum-val;
}









int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        cout<<solve()<<endl;
    }
    return 0;
}