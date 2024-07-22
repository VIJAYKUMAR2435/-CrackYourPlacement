class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
       int m = grid.size();
    int n = grid[0].size();

    // If the starting point or the ending point is an obstacle, return 0.
    if (grid[0][0] == 1 || grid[m-1][n-1] == 1) {
        return 0;
    }

    // Create a DP table with the same dimensions as grid.
    std::vector<std::vector<int>> dp(m, std::vector<int>(n, 0));

    // Initialize the starting point.
    dp[0][0] = 1;

    // Fill the DP table.
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == 1) {
                dp[i][j] = 0; // No path through obstacles.
            } else {
                if (i > 0) {
                    dp[i][j] += dp[i-1][j]; // Paths from above.
                }
                if (j > 0) {
                    dp[i][j] += dp[i][j-1]; // Paths from the left.
                }
            }
        }
    }

    // The bottom-right corner will have the number of unique paths.
    return dp[m-1][n-1];
    }
};