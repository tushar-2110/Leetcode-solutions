class Solution {
public:
    string reverseWords(string s) {
        
        
        int n=s.size();
        vector<string> ans;
        string temp="";
        for(int i=0;i<n;i++)
        {
            if(s[i]==' ')
            {
                if(!temp.empty()&&temp!=" ")
                {ans.push_back(temp);
                temp="";
                }
            }else if(s[i]!=' '){
                
                temp+=s[i];
                
            }
        }
        
        if(temp!=" "&&!temp.empty())
        ans.push_back(temp);
        
        reverse(ans.begin(),ans.end());
        
        string str="";
        
        
        for(int i=0;i<ans.size()-1;i++)
        {
            //cout<<ans.size()<<"\n";
            //cout<<ans[i]<<"\n";
            
            if(ans[i]!=" ")
            {str+=ans[i];
            str+=" ";
            }
        }
        
        if(ans[ans.size()-1]!=" ")
       str+=ans[ans.size()-1];
        
        
        
        
        return str;
    }
};