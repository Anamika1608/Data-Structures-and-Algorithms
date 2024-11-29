void dfs(int start, vector<int> &ans, vector<vector<int>> &adj, vector<bool> &visited)
{

    visited[start] = true;

    for (auto it : adj[start])
    {
        if (!visited[it])
        {
            dfs(it, ans, adj, visited);
        }
    }
    ans.insert(ans.begin(), start);
}
vector<int> topologicalSort(vector<vector<int>> &adj)
{
    int m = adj.size();
    vector<bool> visited(m, false);
    vector<int> ans;
    for (int i = 0; i < m; i++)
    {
        if (!visited[i])
        {
            dfs(i, ans, adj, visited);
        }
    }

    return ans;
}