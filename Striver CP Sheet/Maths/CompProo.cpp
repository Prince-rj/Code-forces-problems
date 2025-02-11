#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        string n;
        cin>>n;
        int sum=0;
        int even=0;
        int zero=0;
        for(int i=0;i<n.length();i++){
            int dig=n[i]-'0';
            if(dig==0)zero=1;
            if(dig%2==0)even++;
            sum+=dig;
        }
        if(sum==0)cout<<"red"<<endl;
        else if((sum%3==0)&&zero&&even>=2)cout<<"red"<<endl;
        else cout<<"cyan"<<endl;
    }
    return 0;
}