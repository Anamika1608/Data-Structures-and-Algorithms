#include <bits/stdc++.h>
using namespace std;

void bfs(int node, vector<int> adj[], vector<int>& ans, vector<bool>& v) {
    queue<int> q;
    q.push(node);
    v[node] = true;

    while (!q.empty()) {
        int item = q.front();
        q.pop();
        ans.push_back(item);

        for (auto it : adj[item]) {
            if (!v[it]) {
                q.push(it);
                v[it] = true;
            }
        } 
    }
    return;
}

int main() {
    int n, m, sn;
    cin >> n >> m >> sn;
    vector<int> adj[n + 1];
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> ans;
    vector<bool> visited(n + 1, false);
    bfs(sn, adj, ans, visited);

    for (auto i : ans) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
