#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        int n;
        cin>>n;
        int sum=0;
        int odd=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            sum+=x;
            if(x%2!=0)odd++;
        }
        int even=n-odd;
        if(sum%2!=0){
            cout<<"YES"<<endl;
        }
        else {
            if(even>=1&&odd>=1){
                cout<<"YES"<<endl;
            }
            else
            cout<<"NO"<<endl;
        }
    }
    return 0;
}