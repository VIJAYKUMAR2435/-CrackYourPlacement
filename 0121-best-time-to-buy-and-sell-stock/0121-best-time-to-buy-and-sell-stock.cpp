class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
       int maxProfit=0; 
       int BuyAtPrice=INT_MAX;
for(int i=0;i<n;i++){
    if(prices[i]<BuyAtPrice){
        BuyAtPrice=prices[i];
    }
    else{
        maxProfit=max(maxProfit,prices[i]-BuyAtPrice);
    }
}
return maxProfit;

       
    }
};