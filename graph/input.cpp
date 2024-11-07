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
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
}

// vector representation - SC- O(2*m) for undirected graph
// for directed graph - SC - O(m)

int main() {
    int n , m;
    cin >> n >> m ;
    vector<int>adj[n+1];
    for (int i=0 ; i<m;i++){
        int u , v;
        cin >> u >> v;
        // u-->v  - for directed graph 
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}
