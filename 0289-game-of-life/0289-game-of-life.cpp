class Solution {
public:
    int solve(const vector<vector<int>>& board, int i, int j, int n, int m) {
        int live = 0;
        if (i > 0 && board[i-1][j] == 1) live++;
        if (i < n-1 && board[i+1][j] == 1) live++;
        if (j > 0 && board[i][j-1] == 1) live++;
        if (j < m-1 && board[i][j+1] == 1) live++;
        if (i > 0 && j > 0 && board[i-1][j-1] == 1) live++;
        if (i > 0 && j < m-1 && board[i-1][j+1] == 1) live++;
        if (i < n-1 && j > 0 && board[i+1][j-1] == 1) live++;
        if (i < n-1 && j < m-1 && board[i+1][j+1] == 1) live++;
        return live;
    }

    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> curr = board;
        int n = board.size();
        int m = board[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int liv = solve(curr, i, j, n, m);
                if (board[i][j] == 0) {
                    if (liv == 3) {
                        board[i][j] = 1;
                    }
                } else if (board[i][j] == 1) {
                    if (liv < 2 || liv > 3) {
                        board[i][j] = 0;
                    }
                }
            }
        }
    }
};
