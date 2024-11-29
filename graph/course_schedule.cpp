class Solution {
public:
    bool dfs(int node, vector<vector<int>>& adj, vector<int>& color) {
        color[node] = 1; 
        for (int neighbor : adj[node]) {
            if (color[neighbor] == 1) {
                return false;
            }
            if (color[neighbor] == 0) {
                if (!dfs(neighbor, adj, color)) {
                    return false;
                }
            }
        }
        color[node] = 2;
        return true;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for (auto& pre : prerequisites) {
            adj[pre[0]].push_back(pre[1]);
        }

        vector<int> color(numCourses, 0); 

        // 0 is unvisited , 1 is visiting , 2 is visited

        for (int i = 0; i < numCourses; i++) {
            if (color[i] == 0) {
                if (!dfs(i, adj, color)) {
                    return false;
                }
            }
        }
        return true;
    }
};
