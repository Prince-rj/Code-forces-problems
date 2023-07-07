#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans="";
    int x=1;
    for(int i=1;i<=n;){
        char c=s[i-1];
        x++;
        i=(x)*(x+1)/2;
        ans+=c;
    }
    cout<<ans<<endl;
    return 0;
}