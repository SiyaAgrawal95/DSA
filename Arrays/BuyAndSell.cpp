#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>prices){
    int maxProfit , bestBuy = prices[0];

    for(int i=1;i<prices.size();i++){
        if(prices[i]>bestBuy){
            maxProfit = max(maxProfit,prices[i]-bestBuy);//sell
        }
        bestBuy = min(bestBuy,prices[i]);//buy
    }
    return maxProfit;
}
int main(){
    int n;
    cin>>n;
    vector<int>prices(n);
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }
    cout<<maxProfit(prices);
    return 0;
}