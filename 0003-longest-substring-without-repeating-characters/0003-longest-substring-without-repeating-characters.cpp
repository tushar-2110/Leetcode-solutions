class Solution {
public:
    int lengthOfLongestSubstring(string s) {
 
   
        vector<int> v(256,-1);
        int n=s.length();

        int start=-1;
        int maxLen=0;
        
        for(int i=0;i<n;i++)
        {
            if(v[s[i]]>start)
                start=v[s[i]];
            v[s[i]]=i;
            maxLen=max(maxLen,i-start);
        }
        
        return maxLen;
    }
};