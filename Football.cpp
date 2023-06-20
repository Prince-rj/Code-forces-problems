#include <bits/stdc++.h>
using namespace std;
string solve(string s){
    int count=0;
    for(int i=0;i<s.length();i++){
        if(count>=7||count<=-7)return "YES";
        if(s[i]=='1'){
            if(count<=0)count=1;
            else count++;
        }
        else{
            if(count>=0)count=-1;
            else count--;
        }
    }
    if(count>=7||count<=-7)return "YES";
    return "NO";
}
int main(){
    string s;
    cin>>s;
    cout<<solve(s);
    return 0;
}