    #include <bits/stdc++.h>
    using namespace std;
    void solve(int n){
        int count=0;
        vector<int> v;
        int val=1;
        while(n>0){
            int dig=n%10;
            n=n/10;
            if(dig!=0){
                v.push_back(dig*val);
                count++;
            }
            val*=10;
        }
        cout<<count<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    int main(){
        int t;
        cin>>t;
        while(t>0){
            t--;
            int n;
            cin>>n;
            solve(n);
        }
        return 0;
    }