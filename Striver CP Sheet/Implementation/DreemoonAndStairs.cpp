#include <bits/stdc++.h>
using namespace std;
int solve(int n,int m){
    if(m>n)return -1;
    int x=n;
    int count=0;
    count=x/2;
    if(x%2!=0)count++;
    while(count%m!=0){
        count++;
    }
    return count;
    
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<solve(n,m);
    return 0;
}