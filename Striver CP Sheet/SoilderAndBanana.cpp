#include <bits/stdc++.h>
using namespace std;

int main(){
    int k,w,n;
    int cost=0;
    cin>>k>>w>>n;
    for(int i=0;i<n;i++){
        cost+=k*(i+1);
    }
    if(cost-w<0)cost=0;
    else cost=cost-w;
    cout<<cost<<endl;
    return 0;
}