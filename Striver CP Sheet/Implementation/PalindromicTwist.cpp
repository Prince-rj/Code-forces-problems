#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        int n;
        string s;
        cin>>n;
        cin>>s;
        int i=0;
        int j=n-1;
        int flag=true;
        while(i<j){
            int x=abs(s[i]-s[j]);
            if(x!=0&&x!=2){
                flag=false;
                break;
            }
            i++;
            j--;
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}