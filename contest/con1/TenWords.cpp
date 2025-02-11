#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        int n;
        cin>>n;
        int arr[n][2];
        int max=-1;
        for(int i=0;i<n;i++){
            cin>>arr[i][0]>>arr[i][1];
            if(arr[i][0]<=10&&(max==-1||arr[max][1]<arr[i][1])){
                max=i;
            }
        }
        cout<<max+1<<endl;
    }
    return 0;
}