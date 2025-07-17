class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        for(int i = 2;i<n;i++){
            cost[i] += min(cost[i-1],cost[i-2]);
        }
        return min(cost[n-1],cost[n-2]);
    }
};

/*

From the 3rd step onwards, we keep updating the cost of reaching that step with the cheapest path:

You can reach i either from i-1 or i-2

So take the minimum of those two paths, and add it to cost[i]

You can reach the top either from step 1 or step 2, whichever is cheaper.

*/
