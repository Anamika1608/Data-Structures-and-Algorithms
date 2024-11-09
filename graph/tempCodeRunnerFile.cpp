#include <bits/stdc++.h>
using namespace std;

void bfs(int node , vector<int>adj[] , vector<int> &ans , vector<bool>&v , queue<int> &q ) {
   for(auto it : node) {
    if(!v[it])  q.push(it);
   }
   v[node] = true;
   int item = q.front() ;
   ans.push_back(item);
   q.pop();
   bfs(item , adj , ans , v , q);
   return;
}

int main(){
    int n, m >> sn;
    cin >> n >> m >> sn;
    vector<int>adj[n+1];
    for (int i = 0 ; i<m; i++){
        int u , v;
        cin >> u >> v;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }
    vector<int> ans;
    vector<bool>v(n+1,false);
    queue<int> q;
    ans.push_back(sn);
    bfs(sn , adj , ans , v , q );

    for(auto i : ans) {
        cout << ans << " " ;
    }

    cout << endl;
}