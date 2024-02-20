class Solution {
public:
    int dfs (int i,int j,vector<vector<int>>& grid,vector<vector<int>>&vis,int n,int m){
        if(i<0 || j<0 || i>=n || j>=m || vis[i][j]==1 || grid[i][j]==0){
            return 0;
        }
        vis[i][j]=1;
        int a=dfs(i-1,j,grid,vis,n,m);
        int b=dfs(i,j-1,grid,vis,n,m);
        int c=dfs(i+1,j,grid,vis,n,m);
        int d=dfs(i,j+1,grid,vis,n,m);

        return 1+a+b+c+d;
    
    
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        vector<vector<int>>vis(n+1,vector<int>(m+1,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] and grid[i][j]==1){
                    int k=dfs(i,j,grid,vis,n,m);
                    ans=max(ans,k);
                }
            }
        }
        return ans;

    }
};