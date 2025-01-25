class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n  = nums.size();
        int nonzero_index = 0;

        for(int i=0;i<n;i++){
            if(nums[i] !=0){
                int temp = nums[nonzero_index];
                nums[nonzero_index++] = nums[i];
                nums[i] = temp; 
            }
        }  
    }
};

/*
Swap each non-zero element with the first zero encountered during traversal.
Minimizing operations to one pass.
Complexity
Time complexity: O(n)

Space complexity: O(1)
*/
