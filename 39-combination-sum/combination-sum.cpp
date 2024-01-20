class Solution {
public:
   void solve(int ind,int sum,vector<int>&arr,vector<int>&ds,vector<vector<int>>&v)
   {
       if(ind>=arr.size()){
           if(sum==0){
                v.push_back(ds);
            }
             return ;
       }
       if(arr[ind]<=sum){
           ds.push_back(arr[ind]);
           solve(ind,sum-arr[ind],arr,ds,v);
           ds.pop_back();
       }
       solve(ind+1,sum,arr,ds,v);
   }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>>v;
        vector<int>ds;
        int ind=0;
        solve(ind,target,arr,ds,v);
        return v;
    }
};