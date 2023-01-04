class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        vector<int> ans;
        
       // int start,int end;
        
        int low=0,high=arr.size()-k;
        
        while(low<high)
        {
            int mid=(low+high)/2;
            
            if(x-arr[mid]>arr[mid+k]-x)
                low=mid+1;
            else
                high=mid;
            
        }
        
        for(int i=low;i<low+k;i++)
            ans.push_back(arr[i]);
        
        
        return  ans;
    }
};