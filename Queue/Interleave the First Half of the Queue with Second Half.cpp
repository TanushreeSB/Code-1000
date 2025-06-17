#include <queue>
using namespace std;

class Solution {
  public:
    queue<int> rearrangeQueue(queue<int> q) {
        int n = q.size();
        int half = n / 2;
        
        queue<int> firstHalf, secondHalf;
        
        // Divide the queue into two halves
        for (int i = 0; i < half; ++i) {
            firstHalf.push(q.front());
            q.pop();
        }
        
        while (!q.empty()) {
            secondHalf.push(q.front());
            q.pop();
        }
        
        // Interleave the two halves
        queue<int> result;
        while (!firstHalf.empty() && !secondHalf.empty()) {
            result.push(firstHalf.front());
            firstHalf.pop();
            result.push(secondHalf.front());
            secondHalf.pop();
        }

        return result;
    }
};

// Interleave the First Half of the Queue with Second Half: https://www.geeksforgeeks.org/problems/interleave-the-first-half-of-the-queue-with-second-half/1


// Fr other aproaches:
// https://www.geeksforgeeks.org/dsa/interleave-first-half-queue-second-half/
