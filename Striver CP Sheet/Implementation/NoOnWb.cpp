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
        vector<int> v;
        for(int i=0;i<n;i++)arr[i]=i+1;
        for(int i=n-1;i>=1;i--){
            float t=((float)(arr[i]+arr[i-1]))/2;
            // cout<<t<<" ";
            if(t>=(float)((int)t+0.5))t++;
            v.push_back(arr[i]);
            v.push_back(arr[i-1]);
            arr[i-1]=(int)t;
        }
        cout<<arr[0]<<endl;
        for(int i=0;i<v.size();i+=2){
            cout<<v[i]<<" "<<v[i+1]<<endl;
        }
    }
    return 0;
}