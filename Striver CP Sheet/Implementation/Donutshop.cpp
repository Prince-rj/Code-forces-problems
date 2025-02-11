#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        long long a,b,c;
        cin>>a>>b>>c;
        int d1=-1,d2=-1;
        if(a<c)d1=1;
        if(a*b>c)d2=b;
        cout<<d1<<" "<<d2<<endl;
    }
    return 0;
}