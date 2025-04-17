class Solution
{
private:
    int findAns(int i, int j, vector<int> &cuts, vector<vector<int>> &dp)
    {

        if (i + 1 >= j)
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];

        int mini = INT_MAX;

        for (int k = i + 1; k < j; k++)
        {
            int cost = cuts[j] - cuts[i] + findAns(i, k, cuts, dp) + findAns(k, j, cuts, dp);
            mini = min(mini, cost);
        }
        return dp[i][j] = mini;
    }

public:
    int minCost(int n, vector<int> &cuts)
    {
        vector<int> allCuts = cuts;
        allCuts.push_back(0);
        allCuts.push_back(n);
        sort(allCuts.begin(), allCuts.end());

        int m = allCuts.size();

        vector<vector<int>> dp(m, vector<int>(m, -1));

        return findAns(0, allCuts.size() - 1, allCuts, dp);
    }
};