class Solution {
public:
    
    int mod=1e9+7;
    long long dp[4001][1001];
    
    
    long long count( int start,int target,int k)
    {
        
        if(k==0&&start==target) return 1;
        
        if(k==0) return 0;
        
        if(dp[start+1000][k]!=-1) return dp[start+1000][k];
        
        long long a=count(start+1,target,k-1);
        a+=count(start-1,target,k-1);
        
        return dp[start+1000][k]=a%mod;
        
        
    }
    
    
    int numberOfWays(int startPos, int endPos, int k) {
        
        
        for(int i=0;i<=3001;i++)
        {
            for(int j=0;j<=k;j++)
                dp[i][j]=-1;
        }
        
        long long ans=count(startPos,endPos,k);
        
        return ans%mod;
    }
};