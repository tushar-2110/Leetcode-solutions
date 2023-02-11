class StockSpanner {
public:
    
    vector<int> v;
    
    
    StockSpanner() {
        
    }
    
    int next(int price) {
        
      v.push_back(price);
        
        int ans=0;
        
        int n=v.size();
        
        for(int i=n-1;i>=0;i--)
        {
            
            if(v[i]<=price)
                ans++;
            else
                break;
            
        }
        
        return ans;
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */