class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        int n = nums1.size(),m=nums2.size();

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        vector<int> ans;
        while(i<n && j<m) {
            if(nums1[i]==nums2[j])
            {
                if (ans.empty() || ans.back() != nums1[i]) {
                    ans.push_back(nums1[i]);
                    //If ans is empty, it allows the first element from nums1 to be added to ans.
//If the last element in ans is not the same as the current element in nums1[i], it adds the current element to ans.
                }
                i++;
                j++;
            }
            else if (nums1[i] < nums2[j]) {
                i++;
            }
            else
            {
                j++;
            }
            
            }
            return ans;
    }
};
