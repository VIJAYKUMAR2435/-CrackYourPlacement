class Solution {
public:
   int solve(vector<int>&coins,int amount,vector<int>&dp){
    if(amount<0){
        return INT_MAX;
    }
    if(amount==0){
        return 0;
    }
    if(dp[amount]!=-1){
        return dp[amount];
    }
    int n=coins.size();
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        int ans=solve(coins,amount-coins[i],dp);
        if(ans!=INT_MAX){
            mini=min(mini,ans+1);
        }
       

    }
    return dp[amount]=mini;
   }
    int coinChange(vector<int>& coins, int amount) {
        vector<int>dp(amount+1,-1);
     int ans=  solve(coins,amount,dp);
     if(ans==INT_MAX){
        return -1;
     }
     return ans;

    }
};


 