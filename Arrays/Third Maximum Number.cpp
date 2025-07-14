class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count = 1;
        int max = nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i] != nums[i+1]){
                count++;
            }

            if(count == 3){
                int ans = nums[i];
                return ans;
            }        
        }
        return max;
    }
};

/*
Approach
Sort the entire nums array in ascending order.

Let count = 1 (the largest element itself counts as the 1st maximum) and store max = nums.back().

Traverse the sorted array backwards starting from index n-2 down to 0:

Whenever nums[i] != nums[i+1], you’ve found a new distinct value, so count++.

As soon as count == 3, return nums[i] (the 3rd distinct maximum).

If the loop finishes without finding three distinct values, return max (the overall maximum).

Complexity
Time complexity:
O(nlogn)

Space complexity:
O(logn)

*/
