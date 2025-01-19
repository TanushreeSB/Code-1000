class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        for(int i = 0; i < nums.size(); i ++){
            nums[abs(nums[i])-1] = -nums[abs(nums[i])-1];
            if(nums[abs(nums[i])-1] > 0) res.push_back(abs(nums [i]));
        }
        return res;
    }
};

/*
Loop Through the Array:

The loop iterates through each element of the array nums.
Using Absolute Value:

abs(nums[i]): The absolute value of nums[i] is taken because the number could have been modified (negated) in previous iterations.
We subtract 1 from abs(nums[i]) to get the index of the number in the array (because array indices are zero-based, but the values are in the range 1 to n).
Marking Seen Numbers:

nums[index] = -nums[index]: This negates the value at the index corresponding to the current number. This marks that the number corresponding to this index has been seen before.
The idea is that if the number at the index is positive, it means we have not encountered this number yet. We then negate it to mark it as seen.
If the number at the index is negative, it means we have already encountered the number, so it is a duplicate.
Handling Duplicates:

When we encounter a negative value at nums[index], it indicates that the number has already been encountered, so we push it to the result vector res.
Return Result:

The function returns the vector res, which contains all the duplicates found in the array.

*/
