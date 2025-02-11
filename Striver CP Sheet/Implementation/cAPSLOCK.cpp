#include <bits/stdc++.h>
using namespace std;
bool isacc(string s){
    bool fir=false;
    bool other=true;;
    if(s[0]>='a')fir=true;
    for(int i=1;i<s.length();i++){
        if(s[i]>'Z'){
            return false;
        }
    }
    return true;
}
int main(){
    string s;
    cin>>s;
    bool isaccid=isacc(s);
    if(isaccid){
        int small='a'-'A';
        if(s[0]>='a')s[0]=(char)(s[0]-small);
        else s[0]=(char)(s[0]+small);
        for(int i=1;i<s.length();i++){
            if(s[i]>='A'&&s[i]<='Z')s[i]=(char)(s[i]+small);
        }
    }
    cout<<s<<endl;
    return 0;
}