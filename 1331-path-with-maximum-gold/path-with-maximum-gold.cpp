class Solution {
public:
    int slove(int i,int j,vector<vector<int>>& grid,vector<vector<int>>&vis) {
        if(i<0 || j<0  || i>=grid.size() || j>=grid[0].size() || grid[i][j]==0 || vis[i][j]==1){
            return 0;
        }
        vis[i][j]=1;
        int left=grid[i][j]+slove(i,j-1,grid,vis);
        int right=grid[i][j]+slove(i,j+1,grid,vis);
        int up=grid[i][j]+slove(i+1,j,grid,vis);
        int doum=grid[i][j]+slove(i-1,j,grid,vis);
        vis[i][j]=0;
        return max(max(left,up),max(right,doum));

    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int maxi=INT_MIN;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){

                maxi=max(maxi,slove(i,j,grid,vis));
            }
        }
        return maxi;
    }
};