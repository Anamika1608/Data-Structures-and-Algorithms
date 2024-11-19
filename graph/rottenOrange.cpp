class Solution {
private:
    int bfs(vector<vector<int>>&grid, queue<pair<int, int>>& q, int isFresh, vector<pair<int, int>> d) {
        int m = grid.size();
        int n = grid[0].size();
        int min = -1;
        while (!q.empty()) {
            int size = q.size();
            min++;
            while (size--) {
                auto [x, y] = q.front();
                q.pop();
                for (auto [dx, dy] : d) {
                    int nx = x + dx;
                    int ny = y + dy;
                    if (nx >= 0 && ny >= 0 && nx < m && ny < n &&
                        grid[nx][ny] == 1) {
                        --isFresh;
                        grid[nx][ny] = 2;
                        q.push({nx, ny});
                    }
                }
                
            }
        }
        return (isFresh) ? -1 : min;
    }

public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int isFresh = 0;
        queue<pair<int, int>> q;
        vector<pair<int, int>> d = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 2) {
                    q.push({i, j});
                }
                if (grid[i][j] == 1) {
                    isFresh += 1;
                }
            }
        }

        if (!isFresh) {
            return 0;
        }
        if (q.empty()) {
            return -1;
        }
        return bfs(grid, q, isFresh, d);
    }
};