#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

// Function to count the number of painters required to paint the boards within the given time
int countPainters(vector<int> &boards, int time) {
    int n = boards.size();  // Total number of boards
    int painters = 1;       // Start with one painter
    long long boardsPainter = 0;  // Tracks the total boards painted by the current painter

    for (int i = 0; i < n; i++) {
        // If the current painter can paint the board within the given time
        if (boardsPainter + boards[i] <= time) {
            boardsPainter += boards[i];
        } else {
            // Assign the board to a new painter
            painters++;
            boardsPainter = boards[i]; // Start the new painter's work with the current board
        }
    }
    return painters;  // Return the total number of painters required
}

// Function to find the largest minimum distance, which is the minimum possible time required
// for the painters to paint all boards such that no painter paints more than `mid` boards
int findLargestMinDistance(vector<int> &boards, int k) {
    // The minimum time required is the time to paint the largest board
    int low = *max_element(boards.begin(), boards.end());
    // The maximum time required is the sum of all board lengths
    int high = accumulate(boards.begin(), boards.end(), 0);

    while (low <= high) {
        // Midpoint (trial time) to check if it's possible with the current number of painters
        int mid = (low + high) / 2;

        // Check how many painters are required for this time
        int painters = countPainters(boards, mid);

        // If more painters are needed than available, increase the time (search in the right half)
        if (painters > k) {
            low = mid + 1;
        } else {
            // Otherwise, try to reduce the time (search in the left half)
            high = mid - 1;
        }
    }
    return low;  // `low` will contain the minimum possible time to paint all boards
}

/*
Key Explanations (Comments in Code):

1. countPainters Function:
   - This function calculates how many painters are required if the maximum time any painter can take is `time`.
   - It works by allocating boards to painters one by one. If adding a board exceeds `time`, a new painter is assigned.
   - The function returns the number of painters required for the given `time`.

2. Initial Range for Binary Search:
   - `low` is the maximum length of any single board (since at least one painter must paint the longest board).
   - `high` is the total sum of all board lengths (if one painter paints everything).

3. Binary Search Logic:
   - Mid (`mid`): The trial time to check if it's feasible to paint all boards within this time.
   - Use `countPainters` to calculate the number of painters required for `mid`.
   - If `painters > k`, it means the current time (`mid`) is too small. Increase `low` to search for a larger time.
   - If `painters <= k`, it means the current time is feasible. Update `high` to search for a smaller feasible time.

4. Final Return:
   - When the binary search ends, `low` represents the minimum possible time required to paint all boards with `k` painters.

5. Edge Cases:
   - If `k >= boards.size()`: Each painter can paint one board, so the answer is `low = max_element(boards.begin(), boards.end())`.
   - If `k == 1`: One painter paints all boards, so the answer is `high = accumulate(boards.begin(), boards.end(), 0)`.

Example:
Input: `boards = {10, 20, 30, 40}`, `k = 2`  
Step 1: `low = 40`, `high = 100`  
Step 2: Binary search to minimize the maximum time (`mid`), while ensuring allocation is possible.  
Output: `60` (Minimum possible time when two painters are used).
*/ 
