#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , m; // n is nodes and m is edges
    cin>> n >> m;
    // graph representation - matrix - time complextity - o(m) SC - O(n*n)
    int adj[n+1][n+1];
    for (int i=0;i<m;i++){
        int u , v;
        cin >> u >> v;
        adj[u][v] = 1;  // adj[u][v] = wt if weigh is given for the edge
        adj[v][u] = 1;
    }
}

// vector representation - SC- O(2*m) for undirected graph
// for directed graph - SC - O(m)

int main() {
    int n , m;
    cin >> n >> m ;
    vector<int>adj[n+1]; // for unweighted edges
    for (int i=0 ; i<m;i++){
        int u , v;
        cin >> u >> v;
        // u-->v  - for directed graph - only below pushback will be there
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}

// weighted edges storing in list
int main() {
    int n , m;
    cin >> n >> m ;
    vector<vector<pair<int,int>>>adj[n+1] // store adjacent node with the weighted edge number in pair in the vector
    for (int i=0 ; i<m;i++){
        int u , v , w;
        cin >> u >> v >> w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

     for (int i = 1; i <= n; i++) {
        cout << "Node " << i << " has edges: ";
        for (auto& edge : adj[i]) {
            cout << "(" << edge.first << ", " << edge.second << ") ";
        }
        cout << endl;
    }

    return 0;
}
