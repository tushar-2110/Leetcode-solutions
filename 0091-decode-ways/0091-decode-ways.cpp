class Solution {
public:
    
    vector<int> dp;
    
    int solve(string s, int n){
        
       if(s[0]=='0')
           return 0;
        
        if(n==s.size())
            return 1;
        
        
        if(dp[n]!=-1)
            return dp[n];
        
        int ans=0;
        if(n+1<s.size()&&(s[n]=='1'||s[n]=='2'&&s[n+1]<='6'))
            ans+=solve(s,n+2);
        
        if(s[n]!='0')
            ans+=solve(s,n+1);
        
         return dp[n]=ans;
        
    }
    
    
    int numDecodings(string s) {
        
        
//         unordered_map<int,char> m;        
//         int n=s.size();

        
//         for(int i=1;i<=26;i++)
//         {
            
//             m[i]=i+96;

//         }
        
        
        int n=s.size();
        
        for(int i=0;i<=n;i++)
            dp.push_back(-1);
        
        int ans=solve(s,0);
        
        
        return ans;
    }
};