class Solution {
public:
    void slove(int ind,int sum,vector<int>&ds,vector<vector<int>>&v,vector<int>& arr){
        if(ind>=arr.size()){
            if(sum==0){
                v.push_back(ds);
                return ;
            }
         return ;
        }
        if(sum-arr[ind]>=0){
            ds.push_back(arr[ind]);
            slove(ind,sum-arr[ind],ds,v,arr);
             ds.pop_back();
        }
        slove(ind+1,sum,ds,v,arr);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>v;
        vector<int>ds;
        slove(0,target,ds,v,candidates);
        return v;
    }
};