#include <bits/stdc++.h>
using namespace std;

int main(){
    int h1,m1,h2,m2;
    char c1,c2;
    cin>>h1;
    cin>>c1;
    cin>>m1;
    cin>>h2;
    cin>>c2;
    cin>>m2;
    int t1=(h1*60)+m1;
    int t2=(h2*60)+m2;
    int mindiff=t2+t1;
    int mintobeadded=mindiff/2;
    int h=mintobeadded/60;
    int m=mintobeadded%60;
    if(h<10){
        cout<<0;
    }
    cout<<h;
    cout<<":";
    if(m<10)cout<<0;
    cout<<m;
    

    
    return 0;
}