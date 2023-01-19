class Solution {
public:
    
    vector<vector<int>> dp;
    
    int solve(int m,int n)
    {
        
        if(n<0||m<0)
            return 0;
        
        
        if(m==0&&n==0)
            return 1;
        
        if(dp[m][n]!=-1)
            return dp[m][n];
        
        
        
        return dp[m][n]=solve(m-1,n)+solve(m,n-1);
        
        
    }
    
    int uniquePaths(int m, int n) {
        
        
        for(int i=0;i<m;i++)
        {
            vector<int> v;
            for(int j=0;j<n;j++)
            {
                v.push_back(-1);

            }
            dp.push_back(v);
            
        }
        
        
        
        int ans=solve(m-1,n-1);
        
        
        return ans;
        
    }
};