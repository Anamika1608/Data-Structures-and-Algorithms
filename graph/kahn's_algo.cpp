vector<int> topologicalSort(vector<vector<int>>& adj) {
    int m = adj.size();
    int n = adj[0].size();
    queue<int> q;
    vector<int> ans;
    vector<int> indegree(m, 0);
    for (int i = 0; i < m; i++) {
        for (auto it : adj[i]) {
            indegree[it]++;
        }
    }
    for (int i = 0; i < m; i++) {
        if (indegree[i] == 0)
            q.push(i);
    }
    while (!q.empty()) {
        int x = q.front();
        ans.push_back(x);
        q.pop();
        for (auto it : adj[x]) {
            indegree[it]--;
            if (indegree[it] == 0)
                q.push(it);
        }
    }
    return ans;
}