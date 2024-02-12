class Solution {
public:
    int dp[101][101];
    int solve(int i,int j,int m,int n){
        if(i<0 || j<0 || i>=m || j>=n){
            return 0;
        }
        if(i==m-1 and j==n-1 ){
            return 1;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        int bottom=solve(i+1,j,m,n);
        int rigth=solve(i,j+1,m,n);
        return dp[i][j]=bottom+rigth;
    }
    int uniquePaths(int m, int n) {
        memset(dp,-1,sizeof(dp));
        int k=solve(0,0,m,n);
        return k;
    }
};