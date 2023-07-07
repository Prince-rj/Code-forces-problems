#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<int> v;
    for(int i=0;i<s.length();i++){
        if(s[i]!='+')v.push_back((int)(s[i]-'0'));
    }
    sort(v.begin(),v.end());
    string ans;
    ans+=(char)(v[0]+'0');
    for(int i=1;i<v.size();i++){
        ans+='+';
        ans=ans+(char)(v[i]+'0');

    }
    cout<<ans<<endl;
    return 0;
}