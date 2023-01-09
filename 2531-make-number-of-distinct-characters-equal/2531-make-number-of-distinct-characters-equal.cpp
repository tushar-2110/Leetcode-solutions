class Solution {
public:
    bool isItPossible(string word1, string word2) {
        
        unordered_map<char,int> m1,m2;
        
        for(auto i:word1)
            m1[i]++;
        for(auto i:word2)
            m2[i]++;
        
        
        for(char i='a';i<='z';i++)
        {
            for(char j='a';j<='z';j++)
            {
                if(m1.count(i)&&m2.count(j))
                {
                    if(--m1[i]==0)m1.erase(i);
                    m1[j]++;
                    
                    if(--m2[j]==0)m2.erase(j);
                    m2[i]++;
                    
                    if(m1.size()==m2.size())
                        return true;
                    
                    if(--m1[j]==0) m1.erase(j);
                    m1[i]++;
                    
                    if(--m2[i]==0) m2.erase(i);
                    m2[j]++;

                }

            }
            
            

        }
     
        return false;
    }
};