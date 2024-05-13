class Solution {
public:
    void fliprow(vector<vector<int>>& grid,int i,int n){
        for(int j=0;j<n;j++){
            if(grid[i][j]==0){
                grid[i][j]=1;
            }
            else{
                grid[i][j]=0;
            }
        }
    }
    void flipcol(vector<vector<int>>& grid,int i,int m){
        for(int j=0;j<m;j++){
            if(grid[j][i]==0){
                grid[j][i]=1;
            }
            else{
                grid[j][i]=0;
            }
        }
    }
    int matrixScore(vector<vector<int>>& grid) {
        vector<int>v;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<n;i++){
            v.push_back(pow(2,i));
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        for(int i=0;i<m;i++){
            if(grid[i][0]==0){
                fliprow(grid,i,n);
            }
        }

        for(int i=0;i<n;i++){
            int c0=0;
            int c1=0;
            for(int j=0;j<m;j++){
                if(grid[j][i]==0){
                    c0++;
                }
                else{
                    c1++;
                }
            }
            if(c0>c1){
                flipcol(grid,i,m);
            }
        }
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    ans+=v[j];
                }
            }
        }
        return ans;
    }
};