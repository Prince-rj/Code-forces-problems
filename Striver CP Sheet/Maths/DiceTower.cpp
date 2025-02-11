// noofdices=n/21;
// if possible then:-
//21*(noofdices+1)-1*(noofdices+1)+6*(noofdices)==n
//21*(noofdices+1)-2*(noofdices+1)+5*(noofdices)==n
//21*(noofdices+1)-3*(noofdices+1)+4*(noofdices)==n
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        long long n;
        cin>>n;
        if(n<15){
            cout<<"NO"<<endl;
            continue;
        }
        int x=n%14;
        if(x>=1&&x<=6)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
