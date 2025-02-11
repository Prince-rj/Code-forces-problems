#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    if(t%2==1)cout<<0<<endl;
    else if((t/2)%2==1)cout<<t/4<<endl;
    else cout<<(t/4)-1<<endl;
    return 0;
}