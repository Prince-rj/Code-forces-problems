#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    //6*3n/2 +1;
    cout<<(6*(t+(t*(t-1))/2))+1<<endl;
    return 0;
}