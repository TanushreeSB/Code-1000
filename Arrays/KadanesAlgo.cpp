class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0]; // Initialize with the first element
        int currentSum = nums[0]; // Current running sum

        for (int i = 1; i < nums.size(); i++) {
            // Update current sum to either the current element or currentSum + element
            currentSum = max(nums[i], currentSum + nums[i]);
            // Update maxSum if currentSum is greater
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};
