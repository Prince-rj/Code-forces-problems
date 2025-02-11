#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int f=0;
    for(int i=0;i<n;i++){
        double x=(double)arr[i]/2;
        if(arr[i]%2!=0){
            if(f){
                arr[i]=floor(x);
                f=0;
            }
            else{
                arr[i]=ceil(x);
                f=1;
            }
        }
        else arr[i]=arr[i]/2;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}