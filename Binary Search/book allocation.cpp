#include <vector>
using namespace std;

// Function to check if it is possible to allocate books such that the maximum pages
// assigned to any student do not exceed 'mid'.
bool isPossible(vector<int> arr, int n, int m, int mid) {
    int studentCount = 1; // Start with one student
    int pageSum = 0;      // Tracks the total pages assigned to the current student

    for (int i = 0; i < n; i++) {
        // If the current book can be added to the current student's page count
        if (pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        } else {
            // Otherwise, allocate the book to a new student
            studentCount++;
            // If the current book exceeds 'mid' or the student count exceeds 'm', return false
            if (studentCount > m || arr[i] > mid) {
                return false;
            }
            pageSum = arr[i]; // Assign the current book to the new student
        }
        // Extra check to ensure the student count never exceeds 'm'
        if (studentCount > m) {
            return false;
        }
    }
    return true; // Allocation is possible for this value of 'mid'
}

// Function to find the minimum possible maximum pages any student has to read
int allocateBooks(vector<int> arr, int n, int m) {
    int s = 0;          // Start of the binary search range
    int sum = 0;        // Sum of all pages in the books

    // Calculate the total number of pages in all books
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    int e = sum;        // End of the binary search range
    int ans = -1;       // Variable to store the final answer
    int mid = s + (e - s) / 2; // Calculate the initial midpoint

    while (s <= e) { // Binary search loop
        // Check if the current 'mid' value can be a valid maximum page allocation
        if (isPossible(arr, n, m, mid)) {
            // If true, store the answer and reduce the range to find a smaller 'mid'
            ans = mid;
            e = mid - 1; // Search in the left half
        } else {
            // Otherwise, increase 'mid' by searching in the right half
            s = mid + 1;
        }
        mid = s + (e - s) / 2; // Recalculate 'mid'
    }
    return ans; // Return the minimum possible maximum pages
}

/*
Key Explanations (Comments in Code):

1. **Binary Search Setup**:
   - `s` starts at `0`, and `e` is the total sum of all pages (`sum`).
   - The goal is to minimize the maximum pages assigned to any student, so we perform binary search to find the smallest feasible `mid`.

2. **isPossible Function**:
   - This checks if it's possible to allocate books such that no student is assigned more than `mid` pages.
   - If `studentCount > m` or any book exceeds `mid`, the allocation is not feasible.

3. **Updating Answer**:
   - If the current `mid` is valid (`isPossible` returns `true`), store it in `ans` and search for a smaller valid `mid` in the left half (`e = mid - 1`).

4. **Mid Calculation**:
   - `mid = s + (e - s) / 2` ensures no overflow when calculating the midpoint.

5. **Final Return**:
   - Once the binary search ends, `ans` holds the smallest `mid` that satisfies the condition, i.e., the minimum possible maximum pages any student has to read.
*/
