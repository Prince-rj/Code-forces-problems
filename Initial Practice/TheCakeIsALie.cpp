#include <iostream>
#include <vector>
using namespace std;
void solve();
bool help(int i,int j,int n,int m,int tar,vector<vector<int>> dp);

int main(){
    int t;
    cin>>t;
    
    while(t>0){
        t--;
        solve();
    }
    return 0;
}
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<int>> dp;
    for(auto i=0;i<n;i++){
        vector<int> v;
        for(auto j=0;j<m;j++){
            v.push_back(-1);
        }
        dp.push_back(v);
    }
    bool h=help(0,0,n,m,k,dp);
    if(h)cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}
bool help(int i,int j,int n,int m,int tar,vector<vector<int>> dp){
    if(tar<0)return false;
    if(i==n-1&&j==m-1){
        if(tar==0)return true;
    }
    if(i==n||j==m)return false;
    if(dp[i][j]!=-1)return dp[i][j];
    bool op1;
    bool op2;
    //right
    // cost isi;
    op1=help(i,j+1,n,m,tar-i-1,dp);
    //down
    op2=help(i+1,j,n,m,tar-j-1,dp);
    return dp[i][j]=op1||op2;
}