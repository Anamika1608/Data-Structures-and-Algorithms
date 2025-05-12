class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<long long> rowSum(n, 0);
        vector<long long> colSum(m, 0);
        long long total = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                rowSum[i] += grid[i][j];
                colSum[j] += grid[i][j];
                total += grid[i][j];
            }
        }

        long long sumSoFar = 0;
        for (int i = 0; i < n - 1; i++) {
            sumSoFar += rowSum[i];
            if (sumSoFar * 2 == total) return true;
        }

        sumSoFar = 0;
        for (int j = 0; j < m - 1; j++) {
            sumSoFar += colSum[j];
            if (sumSoFar * 2 == total) return true;
        }

        return false;
    }
};
