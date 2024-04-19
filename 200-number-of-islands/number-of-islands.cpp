class Solution {
public:
    void dfs(int i,int j,vector<vector<char>>& grid,vector<vector<int>>& vis,int n,int m){
        if(i<0 or i>=n or j<0 or j>=m or vis[i][j]==1  ){
            return ;
        }
        if(grid[i][j]=='1'){
        vis[i][j]=1;
        dfs(i+1,j,grid,vis,n,m);
        dfs(i-1,j,grid,vis,n,m);
        dfs(i,j+1,grid,vis,n,m);
        dfs(i,j-1,grid,vis,n,m);
        }
      //  return ;
        
       
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' and vis[i][j]==0){
                    c+=1;
                    dfs(i,j,grid,vis,n,m);
                }
            }
        }
        return c;

    }
};