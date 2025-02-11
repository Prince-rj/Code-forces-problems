#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a[26];
    for(int i=0;i<26;i++)a[i]=0;
    for(int i=0;i<s.length();i++){
        a[s[i]-'a']++;
    }
    string oneins="";
    for(int i=0;i<26;i++){
        int count=0;
        if(a[i]%n==0){
            count=a[i]/n;
        }
        else {
            cout<<-1<<endl;
            return 0;
        }
        for(int j=0;j<count;j++){
            oneins+=(char)(i+'a');
        }
    }
    string ans="";
    for(int i=0;i<n;i++){
        ans+=oneins;

    }
    cout<<ans<<endl;
    return 0;
}