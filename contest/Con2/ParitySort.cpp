#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        int n;
        cin>>n;
        int arr[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            b[i]=arr[i];
        }
        sort(arr,arr+n);
        int flag=1;
        for(int i=0;i<n;i++){
            if(b[i]%2!=arr[i]%2)flag=0;
            
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}