class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
          vector<vector<int>> ans; 
         
        sort(intervals.begin(),intervals.end()); 
         
        int n=intervals.size(); 
        vector<int>v; 
        v.push_back(intervals[0][0]) ;
        v.push_back(intervals[0][1]);
        ans.push_back(v);
        int curri=0;

        for(int i=1;i<intervals.size();i++){
            if(ans[curri][1]>=intervals[i][0]){
                ans[curri][1]=max(intervals[i][1] , ans[curri][1]);
            }
            else{
                vector<int>v; 
                v.push_back(intervals[i][0]);
                v.push_back(intervals[i][1]);
                ans.push_back(v);
                curri++;
            }
        }
        
       return ans; 
        
    }
};