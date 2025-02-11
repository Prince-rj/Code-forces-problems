#include <bits/stdc++.h>
using namespace std;

long long int maxmin(long long int n){
    long long int maxi=0;
    long long int mini=9;
    if(n==0){
        return 0;
    }
    while(n>0){
        long long int dig=n%10;
        n=n/10;
        maxi=max(maxi,dig);
        mini=min(mini,dig);
    }
    return maxi*mini;
}
bool isZero(long long int n){
    while(n){
        if(n%10==0)return true;
        n=n/10;
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        long long int a,b;
        cin>>a>>b;
        long long int temp=a;
        for(int i=0;i<b-1;i++){
            long long int val=maxmin(temp);
            temp+=val;
            if(isZero(temp))break;
        }
        cout<<temp<<endl;
    }
    return 0;
}