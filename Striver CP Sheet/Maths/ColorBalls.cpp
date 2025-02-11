#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        int r,g,b,w;
        cin>>r>>g>>b>>w;
        int even=0;
        if((r%2==0))even++;
        if((g%2==0))even++;
        if((b%2==0))even++;
        if((w%2==0))even++;
        if(even>=3){
            cout<<"yes"<<endl;
            continue;
        }
        int j=2;
        bool flag=false;
        while(j--){
            even=0;
            if(r<=0||b<=0||g<=0)break;
            r-=1;
            b-=1;
            g-=1;
            w+=3;
            if((r%2==0))even++;
            if((g%2==0))even++;
            if((b%2==0))even++;
            if((w%2==0))even++;
            if(even>=3){
                flag=true;
                break;
            }
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}