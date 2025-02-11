#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int steps=0;
    steps+=t/5;
    t=t%5;
    steps+=t/4;
    t=t%4;
    steps+=t/3;
    t=t%3;
    steps+=t/2;
    t=t%2;
    steps+=t;
    cout<<steps<<endl;
    return 0;
}