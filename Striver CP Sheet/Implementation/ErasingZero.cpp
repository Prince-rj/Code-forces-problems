#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        string s;
        cin>>s;
        int firstone=-1;
        int lastone=-1;
        int totalone=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                if(firstone==-1)firstone=i;
                lastone=i;
                totalone++;
            }
        }
        if(firstone==-1){
            cout<<0<<endl;
            continue;
        }
        int ans=(lastone-firstone+1)-totalone;
        cout<<ans<<endl;
    }

    return 0;
}