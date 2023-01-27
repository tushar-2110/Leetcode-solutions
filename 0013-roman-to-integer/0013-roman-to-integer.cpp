class Solution {
public:
    int romanToInt(string s) {
        
        int ans=0;
        unordered_map<char,int> m;
        
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        
        
        bool flag=false;
        
        for(int i=s.size()-1;i>0;i--)
        {
            if(s[i]=='V'&&s[i-1]=='I'||s[i]=='X'&&s[i-1]=='I')
            {
                ans+=m[s[i]]-1;
                
                if(i-1==0)
                    flag=true;
                
                i--;
            }
            else if(s[i]=='L'&&s[i-1]=='X'||s[i]=='C'&&s[i-1]=='X')
            {
                ans+=m[s[i]]-10;
                
                if(i-1==0)
                    flag=true;
                
                i--;
            }
            else if(s[i]=='D'&&s[i-1]=='C'||s[i]=='M'&&s[i-1]=='C')
            {
                ans+=m[s[i]]-100;
                
                if(i-1==0)
                    flag=true;
                
                i--;
            }else{
                
                ans+=m[s[i]];
                   
            }
        
        }
        
        if(!flag)
        ans+=m[s[0]];
        
        return ans;
        
    }
};