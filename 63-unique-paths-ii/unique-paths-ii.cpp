class Solution {
public:
    int dp[101][101];
    int solve(int i,int j,int m,int n,vector<vector<int>>& grid){
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]==1 ){
            return 0;
        }
        if(i==m-1 and j==n-1){
            return 1;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        int bottom=solve(i+1,j,m,n,grid);
        int right=solve(i,j+1,m,n,grid);
        return dp[i][j]=bottom+right;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof(dp));
        int m=grid.size(),n=grid[0].size();
        int k=solve(0,0,m,n,grid);
        return k;
    }
};