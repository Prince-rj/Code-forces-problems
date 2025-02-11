#include <bits/stdc++.h>
using namespace std;
int gcd(int n,int m){
    if(n%m==0)return m;
    else return gcd(m,n%m);
}
int compare(string fir,string sec){
    for(int i=0;i<fir.length();i++){
        if(fir[i]!=sec[i])return -1;
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        string s1,s2;
        cin>>s1>>s2;
        int n=s1.length();
        int m=s2.length();
        int lcm=(n*m)/gcd(n,m);
        string fir="";
        string sec="";
        for(int i=0;i<lcm/n;i++){
            fir+=s1;
        }
        for(int i=0;i<lcm/m;i++){
            sec+=s2;
        }
        if(compare(fir,sec)==0)cout<<fir<<endl;
        else cout<<-1<<endl;
    }
    
    return 0;
}