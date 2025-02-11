#include <bits/stdc++.h>
using namespace std;

int main(){
    string t;
    cin>>t;
    string rev="";
    for(int i=t.length()-1;i>=0;i--){
        rev+=t[i];
    }
    cout<<t<<rev<<endl;
    return 0;
}