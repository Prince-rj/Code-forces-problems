#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    long long arr[k];
    for(int i=0;i<k;i++)arr[i]=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[x-1]++;
    }
    int odd=0;
    for(int i=0;i<k;i++){
        if(arr[i]%2!=0){
            odd++;
        }
    }
    cout<<n-(odd/2)<<endl;
    return 0;
}