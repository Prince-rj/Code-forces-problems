    #include <bits/stdc++.h>
    using namespace std;

    int main(){
        int n,k,l,c,d,p,nl,np;
        cin>>n>>k>>l>>c>>d>>p>>nl>>np; 
        int totdrink=k*l;
        int totlime=c*d;
        int posdrink=totdrink/nl;
        int possalt=p/np;
        int ans=min(posdrink/n,min(possalt/n,totlime/n));
        cout<<ans<<endl;
        return 0;
    }