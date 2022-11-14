class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        
        
        //sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=0;
      long long   int temp=1;
        
        for(int i=0;i<n;i++)
        {
            temp=nums[i];
            
            if(temp==k) ans++;
            
            
            for(int j=i+1;j<n;j++){
                
                
                temp=(nums[j]*temp)/gcd(nums[j],temp);
                
                
                if(temp==k)ans++;
                
                if(temp>k) break;
                
            }
            
            
            
        }
        
        
      //  if(temp==k) ans++; 
        
        
        
        
        
        
        return ans;
    }
};