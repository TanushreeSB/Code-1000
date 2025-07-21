class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(), nums.end());
    }
};

/*
Why sorting?
This "reset" to the smallest arrangement is done by sorting the array in ascending order.
So, sorting is done inside next_permutation only when there is no bigger permutation left.
*/

*************************************************************************************************************************************************

void nextPermutation(vector<int>& nums) {
    int i = nums.size() - 2; // Second last element.

    // Step 1: Find the dip
    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }

    if (i >= 0) {
        int j = nums.size() - 1;
        // Step 3: Find number bigger than dip
        while (nums[j] <= nums[i]) {
            j--;
        }
        // Step 4: Swap dip and bigger number
        swap(nums[i], nums[j]);
    }
    // Step 5: Reverse everything after dip
    reverse(nums.begin() + i + 1, nums.end());
}


/*
Look from right to left and find the first place where a number is smaller than the number to its right.

For example:
[1, 2, 3] → check 2 and 3 — 2 < 3, so 2 is our "dip".

If you can’t find that dip, that means the digits are in descending order (biggest number possible).
Just reverse the whole list to get the smallest number.

If you find the dip, look again from the right and find a number bigger than the dip.

Swap those two numbers.

Finally, reverse the numbers after the dip's position.
*/
