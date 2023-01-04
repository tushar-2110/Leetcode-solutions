class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       int n = nums.size();
        int low=0;
        int high = n-1;
        if(n==1)
        return 0;
        while(low<=high){
            int mid = (high+low)/2;
            if((mid==0||nums[mid-1]<nums[mid])&&(mid==n-1||nums[mid]>nums[mid+1])){
                return mid;
            }
            else
            if(nums[mid+1]>nums[mid])
            low=mid+1;
            else
            high = mid-1;
        }
        return low;
        
    }
};