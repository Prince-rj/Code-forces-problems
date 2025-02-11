#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ch[26];
        for(int i=0;i<26;i++)ch[i]=0;
        for(int i=0;i<s.length();i++){
            ch[s[i]-'A']++;
        }
        int count=0;
        for(int i=0;i<26;i++){
            if(ch[i]>=(i+1))count++;
        }
        cout<<count<<endl;
    }
    return 0;
}