#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<s.length();i++){
        char c=s[i];
        for(int j=0;j<5;j++){
            if(arr[j][i]==c){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}