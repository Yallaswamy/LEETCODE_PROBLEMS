class Solution {
public:
    long long mod=1e9+7;
    int solve(int m,int n,int move,int r,int c,vector<vector<vector<int>>>&dp){
        if(r<0 || c<0 || r>=m || c>=n) return 1;
        if(move<=0) return 0;
        if(dp[move][r][c]!=-1) return dp[move][r][c];
        int a1=solve(m,n,move-1,r-1,c,dp);
        int b1=solve(m,n,move-1,r,c-1,dp);
        int c1=solve(m,n,move-1,r+1,c,dp);
        int d1=solve(m,n,move-1,r,c+1,dp);
        return dp[move][r][c]=((a1+b1)%mod+(c1+d1)%mod)%mod;
         
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        vector<vector<vector<int>>>dp(maxMove+1,vector<vector<int>>(m+1,vector<int>(n+1,-1)));
        return solve(m,n,maxMove,startRow,startColumn,dp);
    }
};