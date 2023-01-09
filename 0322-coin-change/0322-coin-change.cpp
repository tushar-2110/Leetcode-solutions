class Solution {
public:

    int coinChange(vector<int>& coins, int amount) {
  
        int n=coins.size();
        vector<int> dp(amount+1,amount+1);
        dp[0]=0;
        
        for(int i=1;i<=amount;i++)
        {
            for(auto j:coins)
            {
                if(i-j>=0)
                dp[i]=min(dp[i],dp[i-j]+1);
            }
        }
        
        if(dp[amount]==amount+1)
            dp[amount]=-1;
        
        return dp[amount];
    }
};