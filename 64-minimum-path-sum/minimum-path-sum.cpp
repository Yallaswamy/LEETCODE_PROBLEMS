class Solution {
public:
    int dp[201][201];
    int monkey(int i,int j,int r,int c,vector<vector<int>>&mat){
        if(i==r-1 and j==c-1) return mat[i][j];

        if(i>r-1 || j>c-1) return 1e5;
        if(dp[i][j]!=-1) return dp[i][j];
       int  right=mat[i][j]+monkey(i+1,j,r,c,mat);
       int  dowm=mat[i][j]+monkey(i,j+1,r,c,mat);

       return dp[i][j]=min(right,dowm);
        
        
    }
    int minPathSum(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        memset(dp,-1,sizeof(dp));
        return monkey(0,0,r,c,grid);
    }
};