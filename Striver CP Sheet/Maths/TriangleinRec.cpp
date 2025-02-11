#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        int l,b;
        cin>>l>>b;
        long long ans=0;
        
        for(int i=0;i<4;i++){
            int k;
            cin>>k;
            int greater=INT_MIN;
            int smaller=INT_MAX;
            for(int i=0;i<k;i++){
                int x;
                cin>>x;
                greater=max(greater,x);
                smaller=min(smaller,x);
            }
            if(i<2){
                ans=max(ans,(long long)(greater-smaller)*b);
            }
            else{
                ans=max(ans,(long long)(greater-smaller)*l);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}