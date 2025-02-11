#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        int n;
        cin>>n;
        int noOfdig=0;
        int dig=0;
        while(n>0){
            dig=n%10;
            noOfdig++;
            n=n/10;
        }
        int tot=0;
        for(int i=1;i<dig;i++){
            tot+=10;
        }
        for(int i=1;i<=noOfdig;i++){
            tot+=i;
        }
        cout<<tot<<endl;
    }
    return 0;
}