class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        
        int high=numbers.size()-1;
        int low=0;
        
        while(low<high)
        {
            
            if(numbers[high]+numbers[low]==target)
                return {low+1,high+1};
            if(numbers[high]+numbers[low]>target)
                high--;
            if(numbers[high]+numbers[low]<target)
                low++;
            
        }
        
        
        return {0};
    }
};