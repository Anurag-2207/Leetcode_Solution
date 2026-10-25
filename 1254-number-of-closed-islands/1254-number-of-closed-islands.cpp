class Solution {
public:
    int dfs(int i,int j,vector<vector<int>>& grid,vector<vector<bool>>& visit){
        int n=grid.size();
        int m=grid[0].size();
            if(i<0 || j<0 || i>=n || j>=m){
                return 0;
            }
            if(grid[i][j]==1 || visit[i][j]==true) return 1;
            visit[i][j]=true;
            int up=dfs(i-1,j,grid,visit);
            int down=dfs(i,j-1,grid,visit);
            int left=dfs(i+1,j,grid,visit);
            int right=dfs(i,j+1,grid,visit);
            return up && down && left && right;
    }
    int closedIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int cnt=0;
        vector<vector<bool>>visit(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0 && visit[i][j]==false){
                    if(dfs(i,j,grid,visit)){
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};