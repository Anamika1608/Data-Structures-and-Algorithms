class Solution {
    public:
      int finalAns(int i, int j1, int j2, int n, int m, vector<vector<int>>& grid, vector<int>& directions, vector<vector<vector<int>>>& dp) {
      if (j1 < 0 || j2 < 0 || j1 >= m || j2 >= m || i >= n) return 0;
  
      if (i == n - 1) {
          if (j1 == j2) return grid[i][j1];
          else return grid[i][j1] + grid[i][j2];
      }
  
      if (dp[i][j1][j2] != -1) return dp[i][j1][j2];
  
      int maxi = 0;
      for (int x = 0; x < 3; x++) {
          for (int y = 0; y < 3; y++) {
              if (j1 == j2) {
                  maxi = max(maxi, grid[i][j1] + finalAns(i + 1, j1 + directions[x], j2 + directions[y], n, m, grid, directions, dp));
              } else {
                  maxi = max(maxi, grid[i][j1] + grid[i][j2] + finalAns(i + 1, j1 + directions[x], j2 + directions[y], n, m, grid, directions, dp));
              }
          }
      }
  
      return dp[i][j1][j2] = maxi;
  }
  
  int solve(int n, int m, vector<vector<int>>& grid) {
      vector<int> directions = {-1, 0, 1};
      vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(m, -1)));
      return finalAns(0, 0, m - 1, n, m, grid, directions, dp);
  }
  
  };