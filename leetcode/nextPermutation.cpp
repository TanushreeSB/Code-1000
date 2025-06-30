class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(), nums.end());
    }
};

/*

Brute-Force Approach
Idea:
- Generate all permutations of the array.
- Sort them.
- Find the current permutation, then return the next one in order.

Drawbacks:
Time Complexity: O(n!) — infeasible for even moderately sized arrays.

Space Complexity: High, since it stores all permutations.

*/
