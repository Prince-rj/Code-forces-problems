#include <bits/stdc++.h>
using namespace std;

int main(){
    int stops;
    cin>>stops;
    int tot=0;
    int ans=0;
    for(int i=0;i<stops;i++){
        int a,b;
        cin>>a;
        cin>>b;
        tot-=a;
        tot+=b;
        ans=max(ans,tot);
    }
    cout<<ans<<endl;
    return 0;
}