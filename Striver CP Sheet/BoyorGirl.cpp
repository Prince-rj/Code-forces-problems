#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int arr[26];
    for(int i=0;i<26;i++)arr[i]=0;
    for(int i=0;i<s.length();i++){
        arr[s[i]-'a']=1;
    }
    int count=0;
    for(int i=0;i<26;i++){
        if(arr[i]==1)count++;
    }
    if(count%2==1)cout<<"IGNORE HIM!";
    else cout<<"CHAT WITH HER!";
    return 0;
}   