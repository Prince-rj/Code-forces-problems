    #include <bits/stdc++.h>
    using namespace std;

    int main(){
        int n=0;
        cin>>n;
        int arr[n];
        int max=0;
        int min=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[max]<arr[i]){
                max=i;
            }
            if(arr[min]>=arr[i]){
                min=i;
            }
        }
        int ans=max+((n-1)-min);
        if(min<max){
            ans--;
        }
        cout<<ans<<endl;
        
        return 0;
    }