class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // This vector will store the result: the duplicates we find
        vector<int> ans;

        // Loop over each number in the array
        for (int i = 0; i < nums.size(); ++i) {
            // We take the absolute value in case it has been marked negative before
            int index = abs(nums[i]) - 1;

            // If the number at this index is already negative,
            // it means we've seen this number before — it's a duplicate!
            if (nums[index] < 0) {
                // Since index = num - 1, we add (index + 1) to get the actual number
                ans.push_back(index + 1);
            } else {
                // Mark this number as visited by making the number at its index negative
                // This only works because the numbers are in the range [1, n]
                nums[index] = -nums[index];
            }
        }

        // Return the result containing all duplicate numbers
        return ans;
    }
};


**************************************************************************************************************************************************************************

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_set<int> seen;
        vector<int> ans;

        for (int num : nums) {
            // If the number is already in the set, it's a duplicate
            if (seen.count(num)) {
                ans.push_back(num);
            } else {
                // Otherwise, add it to the set
                seen.insert(num);
            }
        }

        return ans;
    }
};


**************************************************************************************************************************************************************************

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == nums[i - 1]) {
                ans.push_back(nums[i]);
            }
        }

        return ans;
    }
};
