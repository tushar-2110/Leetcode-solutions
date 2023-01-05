class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        vector<int> ans;
        
        int n=nums.size();
        
        int i=0;
        int x=0;
        
        while(ans.size()!=n)
        {
            x=nums[i++];
            
            int m=0;
            
            while(m!=n)
            {
               if(nums[(i+m)%n]>x)
               {
                   ans.push_back(nums[(i+m)%n]);
                   break;
               }else
                   m++;
            
            }
            
            if(m==n)
                ans.push_back(-1);
            
        }
        
        
        
        return ans;
    }
};