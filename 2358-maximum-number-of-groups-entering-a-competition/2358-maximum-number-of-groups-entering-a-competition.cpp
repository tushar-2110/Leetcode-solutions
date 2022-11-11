class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        
        
        int n=grades.size();
        
        sort(grades.begin(),grades.end());
        
        int ans=1;
        
        int sum=0;
        int count=1;
        int  prev=grades[0];
        int temp=0;        
        for(int i=1;i<n;i++)
        {
            
            sum+=grades[i];
            //count++; 
            temp++;
            
            if(sum>prev&&temp>count)
            {
                
                cout<<grades[i]<<"\n";
                ans++;
                prev=sum; sum=0;
                count=temp; temp=0;
            }
            
            
        }
        
        
        
          
            
        
        
        return ans;
    }
};