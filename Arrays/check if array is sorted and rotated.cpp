class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        
        for(int i=1;i<n;i++){ // start with 1
            if(nums[i-1]>nums[i]){
                count++;
            }
        }

        if(nums[n-1] > nums[0]){ // to check last element with first element
            count++;
        }
        return count <= 1; 
        /*
            Which means:
            True if the array is sorted or rotated sorted (0 or 1 drop),
            False if the array is not valid (more than 1 drop).
       */
      }
};
