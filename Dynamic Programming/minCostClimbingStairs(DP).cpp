#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n + 1, 0);
        for (int i = 2; i <= n; i++) {
            dp[i] = min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
        }
        return dp[n];
    }
};

/*
Intuition
This problem can be solved using dynamic programming. The idea is to determine the minimum cost to reach the top of the staircase by considering the minimum of the two possible steps leading up to each stair.

Approach
Create a dp array where dp[i] represents the minimum cost to reach the ith step.
Initialize dp[0] = 0 and dp[1] = 0 since we can start from either of the first two steps.
Iterate through the cost array from index 2 to n, computing dp[i] as the minimum of the two previous steps.
The answer is stored in dp[n], which represents the minimum cost to reach the top.

Complexity
Time complexity: ( O(n) ), since we traverse the array once.
Space complexity: ( O(n) ), as we maintain a dp array of size ( n+1 ).
*/


