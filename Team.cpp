#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++){
        int x;
        int y;
        int z;
        cin>>x;
        cin>>y;
        cin>>z;
        if(x+y+z>=2)count++;
    }
    cout<<count;
    
    return 0;
}