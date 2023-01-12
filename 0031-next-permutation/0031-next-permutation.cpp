class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
    
        int n = nums.size(), k, m;
    	for (k = n - 2; k >= 0; k--) {
            if (nums[k] < nums[k + 1]) {
                break;
            }
        }
    	if (k < 0) {
    	    reverse(nums.begin(), nums.end());
    	} else {
    	    for (m = n - 1; m > k; m--) {
                if (nums[m] > nums[k]) {
                    break;
                }
            } 
    	    swap(nums[k], nums[m]);
    	    reverse(nums.begin() + k + 1, nums.end());
        }
        
        
        
    }
};