#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        int n,m,k,h;
        cin>>n>>m>>k>>h;
        int count=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            int hdiff=abs(h-x);
            if(hdiff!=0&&hdiff%k==0&&hdiff/k<m)count++;
        }
        cout<<count<<endl;
    }
    return 0;
}