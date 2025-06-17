class Solution {
  public:
    int startStation(vector<int> &gas, vector<int> &cost) {
        int totalGas = 0, totalCost = 0;
        int start = 0, tank = 0;
        
        for (int i = 0; i < gas.size(); i++) {
            totalGas += gas[i];
            totalCost += cost[i];
            tank += gas[i] - cost[i];
            
            if (tank < 0) {
                // Can't reach i+1 from i
                start = i + 1;
                tank = 0;
            }
        }
        
        // If total gas is less than total cost, no solution
        if (totalGas < totalCost) return -1;
        
        return start;
    }
};
// Gas Station: https://www.geeksforgeeks.org/problems/circular-tour-1587115620/1
