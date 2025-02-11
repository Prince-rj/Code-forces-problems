#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    unordered_map<char,int> m;
    char fir='$';
    char sec='$';
    for(int i=0;i<s.length();i++){
        if(fir=='$'||s[i]==fir){
            fir=s[i];
        }
        else if(sec=='$'){
            sec=s[i];
        }
        else break;
    }
    if(fir=='$'||sec=='$'){
        cout<<"NO"<<endl;
        return 0;
    }
    else{
        cout<<"YES"<<endl;
        cout<<fir<<sec<<endl;
    }
    return 0;
}