#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a + n);
    int even=(int)1e9;
    int odd=(int)1e9;
    for(auto i:a){
        if(i%2==0){
            even=min(even,i);
        }
        else{
            odd=min(odd,i);
        }
    }
    if(even==(int)1e9||odd==(int)1e9)cout<<"yes"<<endl;
    else if(even>odd)cout<<"yes"<<endl;
    else if(odd==1)cout<<"yes"<<endl;
    else cout<<"No"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        solve();
    }
    return 0;
}