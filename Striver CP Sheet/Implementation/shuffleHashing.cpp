#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        string s1;
        string s2;
        cin>>s1;
        cin>>s2;
        if(s1.length()>s2.length()){
            cout<<"NO"<<endl;
            continue;
        }
        sort(s1.begin(),s1.end());
        bool flag=false;
        for(int i=0;i<=s2.length()-s1.length();i++){
            string s3=s2.substr(i,s1.length());
            sort(s3.begin(),s3.end());
            if(s3==s1){
                flag=true;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}