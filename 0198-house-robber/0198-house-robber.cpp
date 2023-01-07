class Solution {
public:
    
    vector<int> dp;
    
    
    int solve(vector<int> &nums, int i)
    {
       if ( i >= nums.size()) return 0;

        if (dp[i] != -1) return dp[i];

        return dp[i] = max(nums[i] + solve(nums,i+2), solve(nums,i+1));
        
    }
    
    
    
    
    int rob(vector<int>& nums) {
        
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            dp.push_back(-1);
        }
        
        int ans=solve(nums,0);
        
        
        return ans;
    }
};