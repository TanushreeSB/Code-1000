class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_to_index;

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];

            // Check if the complement exists in the map
            if (num_to_index.find(complement) != num_to_index.end()) {
                return {num_to_index[complement], i};
            }

            // Otherwise, store the number with its index
            num_to_index[nums[i]] = i;
        }

        return {}; // Return empty vector if no solution found
    }
};

/*
 Algorithm Steps
Create an empty hash map num_to_index that maps a number to its index.

Loop through the vector nums:

For each number num, calculate the complement: target - num.

Check if the complement is already in the hash map:

If yes: you've found the two numbers, return their indices.

If no: add num and its index to the hash map.

If no solution is found after the loop (which shouldn't happen if input is valid), return an empty vector.

*/
