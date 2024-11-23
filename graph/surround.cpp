class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<char>> ans(m, vector<char>(n, 'X'));
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        vector<pair<int, int>> drxn = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        queue<pair<int, int>> q;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 || i == m - 1) {
                    if (board[i][j] == 'O') {
                        q.push({i, j});
                        ans[i][j] = 'O';
                        visited[i][j] = true;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i == 0 || i == n - 1) {
                    if (board[i][j] == 'O') {
                        q.push({i, j});
                        ans[i][j] = 'O';
                        visited[i][j] = true;
                    }
                }
            }
        }

        while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();
            for (auto [u, v] : drxn) {
                int nx = x + u;
                int ny = x + v;
                if (nx >= 0 && ny >= 0 && nx < m && ny < n &&
                    !visited[nx][ny] && board[nx][ny] == 'O') {
                    q.push({nx,ny});
                    visited[nx][ny] = true;
                    ans[nx][ny] = 'O';
                }
            }
        };
        board = ans;
    }
};