#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        string s;
        cin>>s;
        int j=0;
        if(s.length()==1&&s[0]<'5'){
            cout<<s<<endl;
            continue;
        }
        else if(s.length()==1&&s[0]>=5){
            cout<<"10"<<endl;
            continue;
        }
        string ans;
        int i;
        if(s[0]>='5'){
            ans=ans+'1';
            j=s.length();
        }
        else{
            for(i=1;i<s.length();i++){
                if(s[i]>='5'){
                    ans=ans+(char)((int)(s[i-1])+1);
                    j=s.length()-i;
                    break;
                }
                else{
                    ans+=s[i-1];
                }
            }
        }
        if(i==s.length()){
            ans+=s[s.length()-1];
        }
        for(i=0;i<j;i++){
            ans=ans+(char)('0');
        }
        cout<<ans<<endl;
    }
    return 0;
}