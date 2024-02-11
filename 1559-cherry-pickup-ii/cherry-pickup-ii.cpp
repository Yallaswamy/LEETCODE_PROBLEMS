class Solution {
public:
    int cc[3]={-1,0,1};
    int solve(int i,int j,int k,vector<vector<int>>&grid,vector<vector<vector<int>>>&dp){
        if(i>=grid.size() || j<0 || j>=grid[0].size() || k<0 || k>=grid[0].size()){
            return 0;
        }
        if(dp[i][j][k]!=-1) return dp[i][j][k];
        int ans=0;
        for(int a=0;a<3;a++){
            int l=j+cc[a];
            for(int b=0;b<3;b++){
                int r=k+cc[b];
                ans=max(ans,solve(i+1,l,r,grid,dp));
            }
        }
        if(j==k) ans+=grid[i][j];
        else ans+=grid[i][j]+grid[i][k];
        return dp[i][j][k]=ans;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        int ans=0;
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(n+1,vector<int>(m+1,-1)));
        ans=solve(0,0,m-1,grid,dp);
        return ans;
    }
};