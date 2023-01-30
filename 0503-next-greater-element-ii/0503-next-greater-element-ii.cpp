class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        
          vector<int> ans;
        bool flag;
        for(int i=0;i<nums.size();i++){
            flag=false;
            for(int j=i+1;j<2*nums.size()-1;j++){
                if(nums[i] < nums[ j% nums.size()]){
                    ans.push_back(nums[j%nums.size()]);
                    flag=true;
                    break;
                    
                }
            }
            if(!flag){
                ans.push_back(-1);
            }
            
        }
        return ans;
        
        
        
        
    }
};