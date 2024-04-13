#pragma GCC optimize("O3", "unroll-loops")
class Solution {
public:
     int area(vector<int>&v){  
        int ans=0;     
        for(int i=0;i<v.size();i++){
            int maxi=1;
            for(int j=i-1;j>=0;j--){
                if(v[j]>=v[i]){
                    maxi++;
                }
                else{
                    break;
                }
            }
            for(int j=i+1;j<v.size();j++){
                if(v[j]>=v[i]){
                    maxi++;
                }
                else{
                    break;
                }
            }
            ans=max(ans,v[i]*maxi);
        }
        return ans;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>v(m,0);
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='1'){
                    v[j]++;
                }
                else{
                    v[j]=0;
                }
            }
            ans=max(ans,area(v));
        }
        
        return ans;
    }
};