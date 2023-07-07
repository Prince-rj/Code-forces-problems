#include <bits/stdc++.h>
using namespace std;

int main(){
    int limak;
    int bob;
    cin>>limak>>bob;
    int count=0;
    while(limak<=bob){
        count++;
        limak*=3;
        bob*=2;
    }
    cout<<count<<endl;

    return 0;
}