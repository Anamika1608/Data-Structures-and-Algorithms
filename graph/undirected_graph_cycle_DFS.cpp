bool dfs(int i , int parent , vector<vector<int>>& adj , vector<bool>&visited) {
        visited[i] = true;
        for(auto it : adj[i]){
            if(!visited[it]){
                visited[it] = true;
                if(dfs(it, i , adj,visited)) return true;
            } else if(it!=parent) return true;
        }
        return false;
}

bool isCycle(vector<vector<int>>& adj) {
    int m = adj.size();
    vector<bool>visited(m,false);
    for (int i=0;i<m;i++){
        if(!visited[i]){
            if(dfs(i, -1 , adj,visited)) return true;
        }
    }
    return false;
}
