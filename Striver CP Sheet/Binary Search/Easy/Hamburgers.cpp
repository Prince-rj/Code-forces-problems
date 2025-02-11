#include <bits/stdc++.h>
using namespace std;

bool possible(unsigned long long int n,unsigned long long int amount,unsigned long long int price_bread,unsigned long long int price_sausages,unsigned long long int price_cheese,unsigned long long int bread,unsigned long long int sausage,unsigned long long int cheese,unsigned long long int avail_bread,unsigned long long int avail_cheese,unsigned long long int avail_sausage){
    unsigned long long int req_bread=n*bread;
    unsigned long long int req_sausages=n*sausage;
    unsigned long long int req_cheese=n*cheese;
    // cout<<"avail_bread= "<<avail_bread<<endl;
    // cout<<req_bread<<" "<<req_sausages<<" "<<req_cheese<<endl;
    unsigned long long int to_buy_bread=(req_bread==0)?0:((long long)req_bread-(long long)avail_bread<0)?0:req_bread-avail_bread;
    unsigned long long int to_buy_cheese=(req_cheese==0)?0:((long long)req_cheese-(long long)avail_cheese<0)?0:req_cheese-avail_cheese;
    unsigned long long int to_buy_sausage=(req_sausages==0)?0:((long long)req_sausages-(long long)avail_sausage<0)?0:req_sausages-avail_sausage;
    // cout<<to_buy_bread<<" "<<to_buy_cheese<<" "<<to_buy_sausage<<endl;
    // cout<<price_cheese<<" "<<price_bread<<endl;
    unsigned long long int price=(to_buy_bread*price_bread)+(to_buy_cheese*price_cheese)+(to_buy_sausage*price_sausages);
    // cout<<"price for "<< n << " is "<<price<<endl;
    if(price<=amount)return true;
    return false;
}

unsigned long long int search(unsigned long long int i,unsigned long long int j,unsigned long long int amount,unsigned long long int price_bread,unsigned long long int price_sausages,unsigned long long int price_cheese,unsigned long long int bread,unsigned long long int sausage,unsigned long long int cheese,unsigned long long int avail_bread,unsigned long long int avail_cheese,unsigned long long int avail_sausage){
    unsigned long long int ans=-1;
    // cout<<bread<<" "<<cheese<<" "<<sausage<<endl;
    while(i<=j){
        unsigned long long int mid=(i+j)/2;
        // cout<<mid<<endl;
        if(possible(mid,amount,price_bread,price_sausages,price_cheese,bread,sausage,cheese,avail_bread,avail_cheese,avail_sausage)){
            i=mid+1;
            ans=mid;
        }
        else{
            j=mid-1;
        }
    }
    return ans;
}
int main(){
    string ham;
    cin>>ham;
    unsigned long long int req_bread=0;
    unsigned long long int req_cheese=0;
    unsigned long long int req_sausages=0;
    for(unsigned long long int i=0;i<ham.length();i++){
        if(ham[i]=='B')req_bread++;
        if(ham[i]=='C')req_cheese++;
        if(ham[i]=='S')req_sausages++;
    }
    unsigned long long int avail_bread=0;
    unsigned long long int avail_cheese=0;
    unsigned long long int avail_sausages=0;
    cin>>avail_bread;
    cin>>avail_sausages;
    cin>>avail_cheese;

    unsigned long long int price_bread,price_sausages,price_cheese;
    cin>>price_bread>>price_sausages>>price_cheese;
    unsigned long long int amount;
    cin>>amount;
    unsigned long long int curr_bread_made=0;
    unsigned long long int curr_cheese_made=0;
    unsigned long long int curr_sausage_made=0;
    
    unsigned long long int max_hams_made=avail_bread+(amount/price_bread);
    max_hams_made=max(max_hams_made,avail_sausages+(amount/price_sausages));
    max_hams_made=max(max_hams_made,avail_cheese+(amount/price_cheese));
    cout<<search(0,max_hams_made,amount,price_bread,price_sausages,price_cheese,req_bread,req_sausages,req_cheese,avail_bread,avail_cheese,avail_sausages);

    return 0;
}
