#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int val=0;
    int i=1;
    while(val<n){
        int sum=(i*(i+1))/2;
        val+=sum;
        if(val>=n){
            if(val==n)cout<<i;
            else cout<<i-1;
            break;
        }
        i++;
    }
    return 0;
}