class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
        
        // Apply operations
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                nums[i] *= 2;
                nums[i + 1] = 0;
            }
        }
        
        // Shift zeros to the end
        int zeroIndex = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[zeroIndex]);
                zeroIndex++;
            }
        }
        
        return nums;
    }
};