#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    long long arr[n];
    int maxInd=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>arr[maxInd]){
            maxInd=i;
        }
    }
    long long maxelem=arr[maxInd];
    arr[maxInd]=0;
    long long secmax=0;
    for(int i=0;i<n;i++){
        secmax=max(secmax,arr[i]);
    }
    long long ans=0;
    //secmax
    long long oneturnsum=(k*maxelem)+secmax;
    int turn=m/(k+1);
    ans+=turn*oneturnsum;
    int remaining=m%(k+1);
    ans+=remaining*maxelem;
    cout<<ans<<endl;

    return 0;
}