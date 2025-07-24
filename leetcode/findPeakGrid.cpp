class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int left = 0, right = n - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            // Find the row with the maximum element in the mid column
            int maxRow = 0;
            for (int i = 0; i < m; ++i) {
                if (mat[i][mid] > mat[maxRow][mid]) {
                    maxRow = i;
                }
            }

            // Check left and right neighbors
            bool leftIsSmaller = (mid == 0) || (mat[maxRow][mid] > mat[maxRow][mid - 1]);
            bool rightIsSmaller = (mid == n - 1) || (mat[maxRow][mid] > mat[maxRow][mid + 1]);

            if (leftIsSmaller && rightIsSmaller) {
                return {maxRow, mid};  // Found a peak
            }
            else if (mid > 0 && mat[maxRow][mid - 1] > mat[maxRow][mid]) {
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }

        return {-1, -1}; // Should never reach here
    }
};


/*

 Binary Search on Columns
We apply binary search on columns to reduce time complexity to O(m × log n).

💡 Intuition:
Instead of checking all elements (brute force), we pick a middle column, find the max element in that column, and check its left/right neighbors. Based on which side is larger, we move in that direction — similar to 1D binary search.

✨ Algorithm Steps:
Set left = 0, right = n-1.

While left <= right:

Find mid = (left + right)/2.

For column mid, find the row index maxRow where the element is maximum in this column.

Check neighbors:

If mat[maxRow][mid] is greater than both its left and right neighbors → it's a peak.

If left neighbor is greater → move right = mid - 1.

If right neighbor is greater → move left = mid + 1.

Return [maxRow, mid].

*/
