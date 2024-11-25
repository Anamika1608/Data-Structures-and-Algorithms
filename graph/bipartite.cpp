// BFS
class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int m = graph.size();
        vector<int> color(m, -1);
        for (int i = 0; i < m; i++) {
            if (color[i] == -1) {
                queue<int> q;
                q.push(i);
                while (!q.empty()) {
                    int x = q.front();
                    q.pop();
                    for (auto it : graph[x]) {
                        if (color[it] == -1) {
                            color[it] = 1 - color[x];
                            q.push(it);
                        } else if (color[it] == color[x])
                            return false;
                    }
                }
            }
        }
        return true;
    }
};

//DFS

class Solution {
public:
    bool dfs(int node, int c, vector<vector<int>>& graph, vector<int>& color) {
        color[node] = c;
        for (auto it : graph[node]) {
            if (color[it] == -1) {
                if (!dfs(it, 1 - c, graph, color))
                    return false;
            } else if (color[it] == color[node])
                return false;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int m = graph.size();
        vector<int> color(m, -1);
        for (int i = 0; i < m; i++) {
            if (color[i] == -1) {
                if (!dfs(i, 0, graph, color))
                    return false;
            }
        }
        return true;
    }
};