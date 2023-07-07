    #include <bits/stdc++.h>
    using namespace std;

    int main(){
        int n=5;
        int m=5;
        int arr[5][5];
        int itemp=0;
        int jtemp=0;
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                cin>>arr[i][j];
                if(arr[i][j]==1){
                    itemp=i;
                    jtemp=j;
                }
            }
        }
        int ans=abs(2-itemp)+abs(2-jtemp);
        cout<<ans<<endl;
        return 0;
    }