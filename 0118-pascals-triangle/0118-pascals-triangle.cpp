class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        
        vector<vector<int>> ans;
        
        
        
        for(int i=0;i<numRows;i++)
        {
            vector<int> v;
            for(int j=0;j<i+1;j++)
            {
                if(j==0||j==i||i==0||i==1)
                    v.push_back(1);
                else{
                    
                    int x=ans[i-1][j-1]+ans[i-1][j];
                    v.push_back(x);
                }
            }
            
            ans.push_back(v);

        }
        
        
        
        
        return ans;
    }
};