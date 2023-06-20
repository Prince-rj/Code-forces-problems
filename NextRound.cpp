#include <bits/stdc++.h>
using namespace std;
int solve(int n,int k,int arr[]){
    if(arr[0]<=0)return 0;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0&&arr[i]>=arr[k-1])count++;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<solve(n,k,a);
    return 0;
}