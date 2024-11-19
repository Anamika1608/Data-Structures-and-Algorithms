#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>> adj, vector<bool> &v) {
    v[node] = true;
    for (int neighbour = 0 ; neighbour<node.size() ; neighbour++ {
        if (adj[node][neighbour]==1 && !v[neighbour]) dfs(neighbour, adj, v);
    })
    return ;
}

int province(vector<vector<int>> adj, vector<bool> &v)
{
    int count = 0;
    for (int i = 0; i < adj.size(); i++)
    {
        if (!v[i])
        {
            count += 1;
            dfs(i,adj, v);
        }
    }
    return count;
}

