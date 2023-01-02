class Solution {
public:
    
    long long solve(string temp)
    {
        long long  res=0;
        long long x=1;
        for(int i=temp.size()-1;i>=0;i--)
        {

            res+=(temp[i]-'0')*x;
            x=x*10;
        
        
        }
        
        return res;
    }
    
    
    int minimumPartition(string s, int k) {
        
        int ans=0;
        int n=s.size();
        string temp="";
        long long a=k;
        
        
        for(int i=0;i<n;i++)
        {
            if((s[i]-'0')>a)
                return -1;
        }
        
        for(int i=0;i<n;i++)
        {
            temp+=s[i];
            
            if(solve(temp)<=a)
                continue;
            else{
                ans++;
                temp=s[i];
            }
            
        }
        
        
        if(solve(temp)<=a) ans++;
        
        
        if(ans==0)
            return -1;
        
        return ans;
    }
};