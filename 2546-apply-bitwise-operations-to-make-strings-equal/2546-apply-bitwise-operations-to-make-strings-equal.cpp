class Solution {
public:
    bool makeStringsEqual(string s, string target) {
        
        
         int c = 0;
         int z=0;
    int l = s.length();

    if (s == target)
    {
        return true;
    }
    
   

        
    for(int i=0;i<l;i++)
    {
        if(s[i]=='0')
            c++;
        if(target[i]=='0')
            z++;

    }
    
   

    if (c == l||z==l)
    {
        //cout<<c<<"\n";
        return false;
    }

    return true;
        
    }
};