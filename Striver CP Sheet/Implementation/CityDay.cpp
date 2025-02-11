#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x,y;
    cin>>n>>x>>y;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0; i<n;i++){
        bool r=true;
        for(int j=max(i-x,0);j<i;j++){
            if(arr[j]<=arr[i]){
                r=false;
            }
        }
        if(!r)continue;
        for(int j=min(i+y,n-1);j>i;j--){
            if(arr[j]<=arr[i]){
                r=false;
            }
        }
        if(r){
            cout<<i+1<<endl;
            return 0;
        }
    }
    return 0;
}