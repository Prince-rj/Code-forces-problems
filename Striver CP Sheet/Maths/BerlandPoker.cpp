#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        int n,m,k;
        cin>>n>>m>>k;
        int cards=n/k;
        int maxJoker=min(cards,m);
        int remJoker=m-maxJoker;
        if(remJoker<=0)cout<<m<<endl;
        else{
            int secMaxJoker=ceil((double)(m-maxJoker)/(k-1));
            cout<<maxJoker-secMaxJoker<<endl;
        }
    }
    return 0;
}