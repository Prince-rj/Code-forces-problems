#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        int a,b;
        cin>>a>>b;
        int r=a%b;
        cout<<(b-r)%b<<endl;
    }
    return 0;
}