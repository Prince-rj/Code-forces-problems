#include <bits/stdc++.h>
using namespace std;
bool isPossible(int size,int n,int req[],int avail[],int magic_powder){
    for(int i=0;i<size;i++){
        int temp=max(0,(n*req[i])-avail[i]);
        magic_powder-=temp;
        
        // cout<<"n is "<<n<<" temp is "<<temp<<" "<<avail[i]<<" "<<req[i]<<" "<<magic_powder<<endl;
        if(magic_powder<0)return false;
    }
    return true;
}
int search(int n,int max,int req[],int avail[],int magic_powder){
    int i=0;
    int j=max;
    int ans=0;
    while(i<=j){
        int mid=(i+j)/2;
        if(isPossible(n,mid,req,avail,magic_powder)){
            // cout<<"is possible"<<endl;
            ans=mid;
            i=mid+1;
        }
        else{
            j=mid-1;
        }
    }
    return ans;
}
int main(){
    int n,magic_powder;
    cin>>n>>magic_powder;
    int requirement[n];
    int available[n];
    for(int i=0;i<n;i++){
        cin>>requirement[i];
    }
    for(int i=0;i<n;i++){
        cin>>available[i];
    }
    int Max=-1;
    for(int i=0;i<n;i++){
        Max=max(Max,(available[i]+magic_powder)/requirement[i]);
    }
    cout<<search(n,Max,requirement,available,magic_powder)<<endl;
    return 0;
}