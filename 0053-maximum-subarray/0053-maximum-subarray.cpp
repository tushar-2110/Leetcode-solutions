class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int ans=INT_MIN;
        int temp=0;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            temp+=nums[i];
            
            ans=max(temp,ans);
            
            
            if(temp<0)
                temp=0;
            
            
        }
        
        if(temp>0)
        ans=max(temp,ans);
        
        return ans;
    }
};