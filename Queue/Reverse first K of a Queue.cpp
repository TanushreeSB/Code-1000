#include <queue>

class Solution {
  public:
    std::queue<int> reverseFirstK(std::queue<int> q, int k) {
        if (k <= 0 || k > q.size()) return q;

        int n = q.size();

        // Step 1: Push first k elements into the rear in reverse order
        std::deque<int> temp;
        for (int i = 0; i < k; ++i) {
            temp.push_front(q.front());
            q.pop();
        }

        for (int val : temp) {
            q.push(val);
        }

        // Step 2: Move the remaining (n - k) elements to the back
        for (int i = 0; i < n - k; ++i) {
            q.push(q.front());
            q.pop();
        }

        return q;
    }
};


// Reverse first K of a Queue: https://www.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1




------------------------------------------------------------------------------
// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}// } Driver Code Ends


// User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    //algo:
    //first k element stack me daaldo  and queue se hatado
    // k element stack se nikalke wapas queue me daalde 
    // fer queue k (n-k) starting k elements, wapas queue me daalde
    
    stack<int> s;
    
    for(int i = 0; i<k; i++) {
        int val = q.front();
        q.pop();
        s.push(val);
    }
    
    while(!s.empty()) {
        int val = s.top();
        s.pop();
        q.push(val);
    }
    
    int t = q.size()-k;
    
    while(t--) {
        int val = q.front();
        q.pop();
        q.push(val);
    }
    
    return q;
}

// Reverse first K of a Queue: https://www.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1
