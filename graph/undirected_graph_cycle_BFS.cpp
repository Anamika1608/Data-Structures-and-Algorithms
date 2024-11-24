bool isCycle(vector<vector<int>> &adj)
{
    int m = adj.size();
    vector<bool> visited(m, false);

    for (int i = 0; i < m; i++)
    {
        if (!visited[i])
        {
            queue<pair<int, int>> q;
            q.push({i, -1});
            visited[i] = true;

            while (!q.empty())
            {
                auto [x, y] = q.front();
                q.pop();

                for (int n : adj[x])
                {
                    if (!visited[n])
                    {
                        q.push({n, x});
                        visited[n] = true;
                    }
                    else if (n != y)
                    {
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

// without cpp new features

bool isCycle(vector<vector<int>> &adj)
{
    int m = adj.size();
    vector<bool> visited(m, false);

    // Check all components of the graph
    for (int i = 0; i < m; i++)
    {
        if (!visited[i])
        {
            queue<pair<int, int>> q;
            q.push(make_pair(i, -1));
            visited[i] = true;

            while (!q.empty())
            {
                int x = q.front().first;  // Get current node
                int y = q.front().second; // Get parent node
                q.pop();

                for (int n : adj[x])
                {
                    if (!visited[n])
                    {
                        q.push(make_pair(n, x));
                        visited[n] = true;
                    }
                    else if (n != y)
                    { // If visited and not parent, cycle exists
                        return true;
                    }
                }
            }
        }
    }
    return false; // No cycle detected in any component
}
