class Solution {
public:
    bool valid(int start,vector<vector<int>>& graph,vector<int>color){
        int n=graph.size();
        color[start]=0;
        queue<int>q;
        q.push(start);
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto it:graph[node]){
                if(color[it]==-1){
                    color[it]= !color[node];
                    q.push(it);
                }
                else if(color[it]==color[node]){
                    return false;
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
         vector<int>color(n);
        for(int i=0;i<n;i++){
            color[i]=-1;
        }
        for(int i=0;i<n;i++){
            if(valid(i,graph,color)==false) return false;
        }
        return true;
    }
};