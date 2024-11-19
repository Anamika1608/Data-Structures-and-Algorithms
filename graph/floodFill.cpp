class Solution {
private:
    vector<vector<int>> bfs(int sr, int sc, int color,
                            vector<vector<int>>& image, int m, int n, int org) {
        queue<pair<int, int>> q;
        q.push({sr, sc});

        vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
        while (!q.empty()) {
            int size = q.size();

            while (size--) {
                auto [x, y] = q.front();
                image[x][y] = color;
                q.pop();
                for (auto [dx, dy] : d) {
                    int nx = x + dx;
                    int ny = y + dy;
                    if (nx >= 0 && ny >= 0 && nx < m && ny < n &&
                        image[nx][ny] == org && image[nx][ny] != color) {
                        q.push({nx, ny});
                    }
                }
            }
        }
        return image;
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        int m = image.size();
        int n = image[0].size();
        int org = image[sr][sc];
        return bfs(sr, sc, color, image, m, n, org);
    }
};


  vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};

        image[sx][sy] = color;
        for (auto [dx, dy] : d) {
            int nx = sr + dx;
            int ny = sy + dy;
            if (nx >= 0 && ny >= 0 && nx < m && ny < n &&
                image[nx][ny] == org && image[nx][ny] != color) {
                dfs(nx, ny, color, image, m, n, org);
            }
        }
         return image;