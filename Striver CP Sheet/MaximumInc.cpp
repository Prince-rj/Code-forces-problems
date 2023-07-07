#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int prev=-1;
    int count=1;
    int m=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(prev!=-1){
            if(x>prev)count++;
            else count=1;
        }
        m=max(m,count);
        prev=x;

    }
    cout<<m<<endl;
    return 0;
}