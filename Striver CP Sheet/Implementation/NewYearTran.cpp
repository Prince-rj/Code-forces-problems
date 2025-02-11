#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    int arr[n];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int ind=1;
    while(ind<n){
        if(ind==t){
            cout<<"YES"<<endl;
            return 0;
        }
        ind=ind+arr[ind-1];
    }
    if(ind==t){
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}