    #include <bits/stdc++.h>
    using namespace std;

    int main(){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            arr[x-1]=i+1;
        }
        for(auto i:arr)cout<<i<<" ";
        cout<<endl;

        return 0;
    }