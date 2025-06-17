#include <vector>
#include <deque>
using namespace std;

class Solution {
public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        deque<int> dq;
        vector<int> ans;
        int n = arr.size();

        // Process first window
        for (int i = 0; i < k; i++) {
            if (arr[i] < 0) {
                dq.push_back(i);
            }
        }

        // Add result for first window
        ans.push_back(!dq.empty() ? arr[dq.front()] : 0);

        // Process the rest
        for (int i = k; i < n; i++) {
            // Remove indices out of window
            if (!dq.empty() && dq.front() <= i - k) {
                dq.pop_front();
            }

            if (arr[i] < 0) {
                dq.push_back(i);
            }

            ans.push_back(!dq.empty() ? arr[dq.front()] : 0);
        }

        return ans;
    }
};

// First negative in every window of size k: https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
