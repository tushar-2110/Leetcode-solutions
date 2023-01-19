class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
         vector<int>v;
        unordered_map<int,int> m;
        
        
        
        int x=0;
        int i;
        for( i=0;i<nums.size();i++)
        {
                x=target-nums[i];
            if(m.find(x)!=m.end())
            {
                
                break;
            }
            
            m[nums[i]]=i;
            
        }
        
        v.push_back(i);
        v.push_back(m[x]);
        
        return v;
        
        
    }
};