class Solution {
public:
    int mini(vector<int>&v){
        int mini=INT_MAX;
        for(int i=0;i<v.size();i++){
            mini=min(v[i],mini);
        }    
        return mini;
    }
    int maxi(vector<int>&v){
        int maxi=INT_MIN;
        for(int i=0;i<v.size();i++){
            maxi=max(v[i],maxi);
        }    
        return maxi;
    }
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int>ans1(matrix.size(),0);
        vector<int>ans2(matrix[0].size(),0);
        vector<int>res;
        for(int i=0;i<matrix.size();i++){
            vector<int>row;
            for(int j=0;j<matrix[0].size();j++){
                row.push_back(matrix[i][j]);
            }
            ans1[i]=mini(row);
          
        }
        for(int i=0;i<matrix[0].size();i++){
            vector<int>col;
            for(int j=0;j<matrix.size();j++){
                col.push_back(matrix[j][i]);
            }
            ans2[i]=maxi(col);
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==ans1[i] and matrix[i][j]==ans2[j]){
                    res.push_back(matrix[i][j]);
                }
            }
        }
        return res;
        
    }
};