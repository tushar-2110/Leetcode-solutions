class Solution {
public:
    
    vector<int> nextSmallerElement(vector<int>arr , int size){
        stack<int> s;
        s.push(-1);
        vector<int> ans(size);
        for(int i=size-1;i>=0;i--){
            int curr=arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr){
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);
            
        }
        return ans;

    }
     vector<int> prevSmallerElement(vector<int>arr , int size){
        stack<int> s;
        s.push(-1);
        vector<int> ans(size);
        for(int i=0;i<size;i++){
            int curr=arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr){
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);
            
        }
        return ans;

    }
    
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> next(n);
        next = nextSmallerElement( heights , n );

        vector<int> prev(n);
        prev = prevSmallerElement( heights , n );
       
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            int l=heights[i];
           

            if(next[i] == -1){
                next[i]=n;
            } 
            int b=next[i]-prev[i]-1;
            int maxArea = l*b;
            ans = max(ans , maxArea);

        }
        return ans;
        
    }
    
    
};