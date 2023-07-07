    #include <bits/stdc++.h>
    using namespace std;
    long long solve(long long n){
        long long num=0;
        long long val=1;
        while(n>=10){
            int dig=n%10;
            n=n/10;
            if(dig>=5)dig=9-dig;
            num=dig*val+num;
            val*=10;
        }
        if(n>=5&&n!=9)num=(9-n)*val+num;
        else num=n*val+num;
        return num;
    }
    int main(){
        long long n;
        cin>>n;
        cout<<solve(n)<<endl;
        return 0;
    }