class Solution {
public:
    int countHillValley(vector<int>& nums) {
        // Remove consecutive duplicates
        vector<int> arr;
        arr.push_back(nums[0]);
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != nums[i-1]) {
                arr.push_back(nums[i]);
            }
        }

        int count = 0;
        for (int i = 1; i < arr.size() - 1; ++i) {
            if ((arr[i] > arr[i-1] && arr[i] > arr[i+1]) || 
                (arr[i] < arr[i-1] && arr[i] < arr[i+1])) {
                count++;
            }
        }
        return count;
    }
};


/*

To identify hills and valleys, we need to check if an element is either greater than both its neighbors (hill) or less than both (valley).
However, consecutive duplicates can distort this check, so we first simplify the array by removing adjacent duplicates.

# Approach
Preprocessing: Create a new array where consecutive duplicates are removed.

Traverse the simplified array from index 1 to n - 2:

For each element, check:

Hill: arr[i] > arr[i-1] && arr[i] > arr[i+1]

Valley: arr[i] < arr[i-1] && arr[i] < arr[i+1]

If either condition is true, increment the count.

Return the total count of hills and valleys.

# Complexity
Time complexity: O(n) — We traverse the array once to remove duplicates and once to count hills/valleys.

Space complexity: O(n) — For storing the filtered array without consecutive duplicates.

*/
