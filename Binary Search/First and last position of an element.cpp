class Solution {
public:

    int FirstOccurance(vector<int>& arr , int n , int k){
    int ans =-1;
      /* If k is found, the function returns the correct index where k first occurs.
If k is not in the array, it returns -1 to signal that no match was found.
In essence, initializing ans to -1 is a way to handle the case when k isn't present in the array, providing a meaningful return value in that scenario.
*/    
    int start = 0;
    int end = n - 1;
    int  mid = start + ( end - start )/ 2;
        while (start <= end){
            if (k ==  arr[mid])
            {
                ans = mid;
                end = mid -1;
            }
            else if (k > arr[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        mid = start + ( end - start )/ 2;

        }
        return ans;
    }

    int LastOccurance(vector<int>& arr , int n , int k){
        int ans =-1;
        
        int start = 0;
        int end = n - 1;
        int mid = start + ( end - start )/ 2;
        while (start <= end){
            if (k ==  arr[mid])
            {
                ans = mid;
                start = mid + 1;
            }
            else if (k > arr[mid])
            {
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
            mid = start + ( end - start )/ 2;

        }
    return ans;
}

    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int First = FirstOccurance(nums , n ,target);
        int Last = LastOccurance(nums , n ,target);
        return {First , Last};
    }
};
