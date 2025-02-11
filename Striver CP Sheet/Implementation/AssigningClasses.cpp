#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        int n;
        cin>>n;
        n=2*n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        vector<int> v1;
        vector<int> v2;
        int flag=0;
        for(int i=0;i<n;i++){
            if(flag){
                v1.push_back(arr[i]);
                flag=0;
            }
            else {
                v2.push_back(arr[i]);
                flag=1;
            }
        }
        if(v1.size()%2==0){
            int temp=v1.back();
            v1.pop_back();
            int t2=v2.back();
            if(t2<temp)v2.push_back(temp);
            else{
                v2.pop_back();
                v2.push_back(temp);
                v2.push_back(t2);
            }
        }
        cout<<abs(v1[(v1.size()/2)]-v2[(v2.size()/2)])<<endl;

    }
    return 0;
}