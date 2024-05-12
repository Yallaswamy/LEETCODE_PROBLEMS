class Solution {
public:
    int solve(int x,int y,vector<vector<int>>&grid){
        int maxi=INT_MIN;
        for(int i=x;i<x+3;i++){
            for(int j=y;j<y+3;j++){
                maxi=max(maxi,grid[i][j]);
            }
        }
        return maxi;
    }
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>>v(n-2,vector<int>(m-2,0));
        for(int i=0;i<n-2;i++){
            for(int j=0;j<m-2;j++){
                v[i][j]=solve(i,j,grid);
            }
        }
        return v;
    }
};