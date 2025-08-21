class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0, end = n - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                return mid;  // target found
            }
            else if (nums[mid] > target) {
                end = mid - 1; // move left
            }
            else {
                start = mid + 1; // move right
            }
        }
        return -1; // not found
    }
};
