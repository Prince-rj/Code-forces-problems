#include <bits/stdc++.h>
using namespace std;
bool isVovel(char c){
    if(c=='a'||c=='A'||
    c=='e'||c=='E'||
    c=='i'||c=='I'||
    c=='o'||c=='O'||
    c=='u'||c=='U'||
    c=='y'||c=='Y'
    )return true;
    return false;
}
int main(){
    string s;
    cin>>s;
    string ans;
    for(int i=0;i<s.length();i++){
        if(isVovel(s[i]))continue;
        else{
            ans+='.';
            char c=s[i];
            if(s[i]<'a')c=(char)(c+('a'-'A'));
            ans+=c;
        }
    }
    cout<<ans;
    return 0;
}