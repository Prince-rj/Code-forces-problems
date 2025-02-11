#include <bits/stdc++.h>
using namespace std;

int main(){
    int t=0;
    cin>>t;
    while(t>0){
        t--;
        int n;
        cin>>n;
        string s;
        cin>>s;
        int lastOne=-1;
        int firstOne=-1;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='1')lastOne=i;
            if(firstOne==-1&&s[i]=='1'){
                firstOne=i;
            }
        }
        if(lastOne==-1){
            cout<<n<<endl;
            continue;
        }
        int val=max((n-lastOne),firstOne+1);
        cout<<2*val<<endl;
    }
    return 0;
}