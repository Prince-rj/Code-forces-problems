#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        int a,b,c;
        cin>>a>>b>>c;
        int gcd=0;
        for(int i=0;i<c;i++){
            gcd=gcd*10+1;
        }
        int x=gcd*2;
        string s=to_string(x);
        while(s.length()<a){
            x*=2;
            s=to_string(x);
        }
        int y=gcd*3;
        s=to_string(y);
        while(s.length()<b){
            y*=3;
            s=to_string(y);
        }
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}