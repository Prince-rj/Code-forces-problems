#include <bits/stdc++.h>
using namespace std;
//54 95 914 2314 2337 6037 6090 15090
int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        int a,b,c;
        cin>>a>>b>>c;
        int ans=0;
        while(a<=c&&b<=c){
            if(a<b)a+=b;
            else b+=a;
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}