
#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> adj[], vector<bool> &v, vector<int> &list) {
    v[node] = true;
    list.push_back(node);
    for (auto it : adj[node]) {
        if (!v[it]) dfs(it, adj, v, list);
    }
}

int main() {
    int n, m, sn;
    cin >> n >> m >> sn;

    vector<bool> v(n + 1, false); 
    vector<int> list;            
    vector<int> adj[n + 1];      

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(sn, adj, v, list);

    for (int node : list) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
