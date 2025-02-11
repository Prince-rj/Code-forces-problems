    #include <bits/stdc++.h>
    using namespace std;

    int main(){
        int n;
        cin>>n;
        int t=0;
        int m;
        cin>>m;
        for(int i=0;i<n;i++){
            if(i%2==0){
                for(int j=0;j<m;j++)cout<<"#";
            }
            else{
                if(t%2==1){
                    cout<<"#";
                }
                for(int j=0;j<m-1;j++)cout<<".";
                if(t%2==0){
                    cout<<"#";
                }
                t++;
            }
            cout<<endl;
        }
        return 0;
    }