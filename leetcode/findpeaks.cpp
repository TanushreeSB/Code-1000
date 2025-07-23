class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        int n = mountain.size();

        vector<int>peaks;

        for(int i = 1;i < n-1; i++){
            if(mountain[i] > mountain[i - 1] && mountain[i] > mountain[i+1]){
                peaks.push_back(i);
            }
        }   
        return peaks;
    }
};

/*

The intuition for finding peaks in an array is to iterate through the array and identify elements that are greater than both their left and right neighbors. These elements are the peaks. Peaks essentially represent the points where the increasing sequence changes its trend and starts decreasing.

Approach
The approach to finding peaks in the mountain array can be implemented using a simple loop. Here are the steps:

1.) Iterate through the array from the second element to the second-to-last element (i.e., from index 1 to index n-2).

2.) For each element at index i, check if it is greater than both its left neighbor (mountain[i-1]) and its right neighbor (mountain[i+1]).

3.) If the condition is true, then the element at index i is a peak, and its index is added to the result vector.

Complexity
Time complexity: O(n)
Space complexity:O(1)

*/
