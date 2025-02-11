#include <iostream>
#include <string>
using namespace std;
void solve();
int main(){
    int t;
    cin>>t;
    while(t>=0){
        t--;
        solve();
    }
    return 0;
}
void solve(){
    string s;
    getline(cin,s);
    int len=s.length();
    if(len>10)
    cout<<s[0]<<len-2<<s[len-1]<<endl;
    else cout<<s<<endl;
}