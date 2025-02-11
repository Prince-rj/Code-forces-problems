#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        int n;
        cin>>n;
        int eonodd=0,oddone=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(i%2!=x%2){
               if(i%2==0){
                    oddone++;
               }
               else eonodd++;
            }
        }
        if(eonodd==oddone){
            cout<<eonodd<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}