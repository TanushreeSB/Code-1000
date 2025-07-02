class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();

        sort(intervals.begin(),intervals.end());

        vector<vector<int>>ans;

        for(int i=0;i<n;i++){
            if(ans.empty() || intervals[i][0] > ans.back()[1]){
                ans.push_back(intervals[i]);
            }
            else{
                ans.back()[1] = max(ans.back()[1],intervals[i][1]);
            }
        }
        return ans;
    }
};

/*

Step 1: Sort the Intervals by Start Time
To easily compare intervals, we sort them by the start value.

Example:

Unsorted: [[2,6],[1,3],[15,18],[8,10]]
Sorted: [[1,3],[2,6],[8,10],[15,18]]

Step 2: Iterate Over the Sorted Intervals and Merge
We initialize an empty result list ans.

For each interval:

If ans is empty OR the current interval does not overlap with the last interval in ans, we add it as-is.

Otherwise, the intervals overlap, so we merge them by updating the end of the last interval in ans.

intervals[i] gives you the entire i-th interval, which is a vector<int> of size 2 (e.g. [2,6]).

intervals[i][0] gives you the start of the i-th interval.

intervals[i][1] gives you the end of the i-th interval.


*/
