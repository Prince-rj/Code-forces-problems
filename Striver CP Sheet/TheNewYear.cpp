    #include <bits/stdc++.h>
    using namespace std;

    int main(){
        int a,b,c;
        cin>>a>>b>>c;
        int x=max(a,max(b,c));
        int y=min(a,min(b,c));
        int z=(a+b+c)-x-y;
        int ans=abs(x-z)+abs(y-z);
        cout<<ans<<endl;
        return 0;
    }