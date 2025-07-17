class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;

        vector<bool>seen(n+1,false);

        for(int i=0;i<n;i++){
            seen[nums[i]] = true;
        }   

        for(int i=1;i<=n;i++){
            if(!seen[i]){
                ans.push_back(i);
            }
        }

        return ans;
    }
};

/*

ans will store the missing numbers to return later.
You create a boolean array seen of size n + 1.

Why n + 1? Because numbers go from 1 to n, and arrays are 0-indexed — so seen[1] to seen[n] are valid positions.

Initially, all values are false → meaning: "number not seen yet".

You're marking the numbers that exist in the array.

For example, if nums[i] = 3, you mark seen[3] = true to indicate "3 is present".

You check for each number from 1 to n whether it was seen or not.

If seen[i] == false, it means that number i is missing, so you add it to result.

Finally, you return the list of all numbers that were not found in the input array.


*/
