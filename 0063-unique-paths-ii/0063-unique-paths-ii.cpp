class Solution {
public:
   vector<vector<int>>dp;
    
    int solve(int m,int n,vector<vector<int>>& obstacleGrid)
    {
        
        if(m<0||n<0)
            return 0;
        
        if(obstacleGrid[m][n]==1)
            return 0;
        
        if(m==0)
        {
            for(int i=n;i>=0;i--){
                
                if(obstacleGrid[m][i]==1)
                    return 0;
            }
            
            return 1;
            
        } 
    
        
        if(n==0)
        {
            for(int i=m;i>=0;i--)
            {
                if(obstacleGrid[i][n]==1)
                    return 0;
            }
            
            return 1;
        }
        
        
        
        
        
        if(dp[m][n]!=-1)
            return dp[m][n];
        
       
        
        
        if(obstacleGrid[m][n-1]==1)
            return dp[m][n]=solve(m-1,n,obstacleGrid);
        
        if(obstacleGrid[m-1][n]==1)
            return dp[m][n]=solve(m,n-1,obstacleGrid);
       
        
     return dp[m][n]=solve(m,n-1,obstacleGrid)+solve(m-1,n,obstacleGrid); 
        
    }
    
    
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
       int m=obstacleGrid.size();
       int n=obstacleGrid[0].size();
        
        for(int i=0;i<m;i++)
        {
            vector<int>v;
            for(int j=0;j<n;j++)
            {

                v.push_back(-1);
            
            }
            dp.push_back(v);
        }
        
        int ans=solve(m-1,n-1,obstacleGrid);
        
        if(obstacleGrid[0][0]==1) ans=0;
        
        return ans;
        
    }
};