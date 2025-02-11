#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    if(t==1||t==2)cout<<"No";
    else{
        cout<<"Yes"<<endl;
        string s="";
        cout<<t/2<<" ";
        for(int i=2;i<=t;i++){
            if(i%2==0)s=s+to_string(i)+" ";
        }   
        s=s.substr(0,s.length()-1);
        cout<<s<<endl;
        s="";
        cout<<ceil((double)t/2)<<endl;
        for(int i=1;i<=t;i++){
            if(i%2!=0)s=s+to_string(i)+" ";
        }
        s=s.substr(0,s.length()-1);
        cout<<s<<endl;
    }
    return 0;
}