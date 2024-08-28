class Solution {
public:
void dfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2, int n, int m, int i, int j, int &res) {
    // Base case: check if we are out of bounds
    if (i < 0 || i >= n || j < 0 || j >= m) {
        return;
    }
    
    // If grid2 has land and grid1 does not, this is not a sub-island
    if (grid2[i][j] == 1 && grid1[i][j] == 0) {
        res = false;
    }
    
    // If grid2 is water, we don't need to proceed further
    if (grid2[i][j] == 0) {
        return;
    }
    
    // Mark the cell in grid2 as visited by setting it to 0
    grid2[i][j] = 0;
    
    // Explore all four directions
    dfs(grid1, grid2, n, m, i-1, j, res); // up
    dfs(grid1, grid2, n, m, i+1, j, res); // down
    dfs(grid1, grid2, n, m, i, j-1, res); // left
    dfs(grid1, grid2, n, m, i, j+1, res); // right
}

    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
     int n = grid2.size();
    int m = grid2[0].size();
    int ans = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid2[i][j] == 1) { // Start a DFS for every land cell in grid2
                int res = true;
                dfs(grid1, grid2, n, m, i, j, res);
                ans += res;
            }
        }
    }
    
    return ans;
    }
};