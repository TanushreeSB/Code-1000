class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> window;

        for (int i = 0; i < nums.size(); ++i) {
            if (window.count(nums[i])) return true;

            window.insert(nums[i]);

            // Maintain window size ≤ k
            if (window.size() > k) {
                window.erase(nums[i - k]);
            }
        }

        return false;
    }
};


/*

Approach
We maintain a window of size k (using a set) and do the following:

Traverse each element in the array:
If the current number already exists in the set → we found a duplicate within distance k → return true.

Otherwise, add the number to the set.

If the set size exceeds k, remove the oldest element (i.e., the element at i−k).
If we complete the loop without finding a duplicate, return false.
Complexity
Time complexity:
O(n) — one pass through the array

Space complexity:
O(k) — storing at most k elements in the set at any time

*/
