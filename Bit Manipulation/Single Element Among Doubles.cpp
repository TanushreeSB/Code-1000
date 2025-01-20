class Solution {
  public:
    int search(int n, int arr[]) {
        // code
        int ans = 0;
        for(int i=0;i<n;i++){
            ans = ans^arr[i];
        }
        return ans;
    }
};

/*
Given an array of integers. All numbers occur twice except one number which occurs once. Find the number in O(n) time & constant extra space.

Example : 

Input:  arr[] = {2, 3, 5, 4, 5, 3, 4}
Output: 2 


Input:  arr[] = {2, 5, 2}
Output: 5


Input:  arr[] = {3}
Output: 3

*/
