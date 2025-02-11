#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int b[n][m];
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j]=1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>b[i][j];
            if(b[i][j]==0){
                for(int k=0;k<m;k++){
                    a[i][k]=0;
                }
                for(int k=0;k<n;k++){
                    a[k][j]=0;
                }
            }
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(b[i][j]==1){
                bool ok=false;
                for(int k=0;k<m;k++){
                    if(a[i][k]==1){
                        ok=true;
                        break;
                    }
                }
                for(int k=0;k<n;k++){
                    if(a[k][j]==1){
                        ok=true;
                        break;
                    }
                }
                if(ok==false){
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}