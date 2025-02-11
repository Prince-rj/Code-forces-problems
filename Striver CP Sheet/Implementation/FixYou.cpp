#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        int n,m;
        cin>>n>>m;
        int tot=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                char x;
                cin>>x;
                if(i==n-1&&j!=m-1){
                    if(x!='R')tot++;
                }
                if(j==m-1&&i!=n-1){
                    if(x!='D')tot++;
                }
                
            }
        }
        cout<<tot<<endl;
        
    }
    return 0;
}