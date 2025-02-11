#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s="";
    while(n>=4){
        if(n%7==0){
            int x=n/7;
            for(int i=0;i<x;i++){
                s+='7';
                n-=7;
            }
            break;
        }
        else{
            n=n-4;
            s+='4';
        }
    }
    if(n==0)cout<<s<<endl;
    else cout<<-1<<endl;
    return 0;
}