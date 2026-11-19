
class Solution {
public:
    bool dfs(vector<vector<int>>& adj, int node,
             vector<int>& vis, vector<int>& pvis) {

        vis[node] = 1;
        pvis[node] = 1;

        for(auto it : adj[node]) {
            if(!vis[it]) {
                if(dfs(adj, it, vis, pvis)) {
                    return true;
                }
            }
            else if(pvis[it]) {
                return true;
            }
        }

        pvis[node] = 0;
        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        vector<vector<int>> adj(numCourses);

        for(auto it : prerequisites) {
            adj[it[1]].push_back(it[0]);
        }

        vector<int> vis(numCourses, 0);
        vector<int> pvis(numCourses, 0);

        for(int i = 0; i < numCourses; i++) {
            if(!vis[i]) {
                if(dfs(adj, i, vis, pvis))
                    return false;
            }
        }

        return true;
    }
};
