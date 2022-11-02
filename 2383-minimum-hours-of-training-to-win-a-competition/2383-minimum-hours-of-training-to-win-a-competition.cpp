class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        
        int sum=0;
        int ans=0;
        int n=experience.size();
        for(int i=0;i<n;i++)
        {
            sum+=energy[i];
        }
        
        
        if(sum>=initialEnergy)
            ans+=(sum-initialEnergy)+1;
        
        
        for(int  i=0;i<n;i++)
        {
            int exp=experience[i];
            
            if(exp>=initialExperience)
            {
                int diff=exp-initialExperience+1;
                ans+=diff;
                initialExperience+=diff;
                
            }
            
            initialExperience+=exp;
        }
        
        
       return ans;       
        

        
    }
};