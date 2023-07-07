    #include <bits/stdc++.h>
    using namespace std;
    int solve(string arr[],int n){
        int x=0;
        for(int i=0;i<n;i++){
            if(arr[i].compare("X++")==0){
                x++;
            }
            else if(arr[i].compare("++X")==0){
                ++x;
            }
            else if(arr[i].compare("X--")==0){
                x--;
            }
            else --x;
        }
        return x;
    }
    int main(){
        int n;
        cin>>n;
        string arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<solve(arr,n)<<endl;
        return 0;
    }