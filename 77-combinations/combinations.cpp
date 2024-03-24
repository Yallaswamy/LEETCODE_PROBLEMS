class Solution {
public:
  void slove(int ind,int k,vector<int>&ds,vector<vector<int>>&ans,int n){
        if(ds.size()==k){
            ans.push_back(ds);
            return ;
        }
        if(ind<=n){
            ds.push_back(ind);
            slove(ind+1,k,ds,ans,n);
            ds.pop_back();
            slove(ind+1,k,ds,ans,n);
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>ds;
        int ind=1;
        slove(1,k,ds,ans,n);
        return ans;
    }
};