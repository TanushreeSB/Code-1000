class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for (int j = 1; j < nums.size(); j++) {
            if (nums[i] != nums[j]) {
            i++;
            nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};

/*

Initialize Two Pointers:
The variable i is initialized to 0. This will be used to track the position where the next unique element should be placed.
The variable j is initialized to 1 and is used to iterate through the array.
Iterate Through the Array:

The for loop starts from j = 1 and iterates through the entire array nums using j as the loop variable.
The reason j starts from 1 is that i starts at 0, so the first element (at index 0) is always considered unique initially.
Check for Unique Elements:

Inside the loop, the condition if (nums[i] != nums[j]) checks if the element at index i is different from the element at index j.
If the elements are different, it means nums[j] is a unique element that has not been encountered before. In that case:
i++ increments the i pointer to move to the next position where the unique element should be placed.
nums[i] = nums[j] places the unique element nums[j] at the position i.
Return the New Length:

After the loop finishes, the variable i will point to the last unique element in the array (i.e., the index of the last unique element).
Since i is a 0-based index, the length of the array with unique elements will be i + 1.
*/
