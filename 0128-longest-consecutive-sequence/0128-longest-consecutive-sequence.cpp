class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        
        int ans=INT_MIN;
        
        int n=nums.size();
        map<int,int> m;
         
        
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;

        }
        
        int j=0;
        int prev=0;
        //int freq=0;
        int res=0;
        
        for(auto i:m)
        {
            if(j==0)
            {
                prev=i.first;
                res++;
            }else{
                
                if(i.first==prev+1)
                {
                    res++;
                    prev=i.first;

                }else{
                    
                    ans=max(ans,res);
                    res=1;
                    prev=i.first;
                }
                
            }
            
            j++;
        }
        
        cout<<j<<"\n";
        ans=max(ans,res);
        
        return ans;
    }
};