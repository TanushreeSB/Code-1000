#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool isSafe(vector<vector<int>> &m, int n, int x, int y,
                vector<vector<int>> &visited) {
        if (x >= 0 && x < n &&
            y >= 0 && y < n &&
            m[x][y] == 1 &&
            visited[x][y] == 0) {
            return true;
        }
        return false;
    }

    void solve(vector<vector<int>> &m, int n,
               int x, int y,
               string path,
               vector<string> &ans,
               vector<vector<int>> &visited) {

        // Base case
        if (x == n - 1 && y == n - 1) {
            ans.push_back(path);
            return;
        }

        visited[x][y] = 1;

        // Down
        if (isSafe(m, n, x + 1, y, visited)) {
            solve(m, n, x + 1, y, path + 'D', ans, visited);
        }

        // Left
        if (isSafe(m, n, x, y - 1, visited)) {
            solve(m, n, x, y - 1, path + 'L', ans, visited);
        }

        // Right
        if (isSafe(m, n, x, y + 1, visited)) {
            solve(m, n, x, y + 1, path + 'R', ans, visited);
        }

        // Up
        if (isSafe(m, n, x - 1, y, visited)) {
            solve(m, n, x - 1, y, path + 'U', ans, visited);
        }

        // Backtracking
        visited[x][y] = 0;
    }

public:
    vector<string> ratInMaze(vector<vector<int>> &m) {
        int n = m.size();
        vector<string> ans;

        if (n == 0 || m[0][0] == 0)
            return ans;

        vector<vector<int>> visited(n, vector<int>(n, 0));

        solve(m, n, 0, 0, "", ans, visited);

        sort(ans.begin(), ans.end());
        return ans;
    }
};

// https://www.geeksforgeeks.org/problems/rat-in-a-maze-problem/1
