#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int i=0;
        int count=0;
        int last=-1;
        int ind=0;
        while(i<n){
            if(count==k){
                if(arr[0]==arr[i])last=i;
            }
            else{
                if(arr[0]==arr[i]){
                    count++;
                    ind=i;
                }
            }
            i++;
        }
        if(count!=k){
            cout<<"NO"<<endl;
            continue;
        }
        if(last==n-1){
            cout<<"YES"<<endl;
            continue;
        }
        if(ind==n-1){
            if(count==k){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
            continue;
        }
        int j=n-1;
        count=0;
        while(j>ind&&count<k){
            if(arr[n-1]==arr[j])count++;
            j--;
            if(count==k)break;
        }
        if(count==k){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}