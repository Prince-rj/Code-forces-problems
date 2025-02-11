#include <bits/stdc++.h>
using namespace std;

int main(){
    string t;
    cin>>t;
    int zero=0;
    for(int i=t.length()-1;i>=0;i--){
        if(t[i]=='0')zero++;
    }
    int ans;
    if(zero==t.length())ans=0;
    else if(zero==t.length()-1||t.length()%2==0)ans=(t.length())/2;
    else ans=(t.length())/2+1;
    cout<<ans<<endl;
    return 0;
}