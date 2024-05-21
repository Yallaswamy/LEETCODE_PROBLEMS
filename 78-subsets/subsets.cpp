class Solution {
public:
    void slove(int ind,vector<int>&nums,vector<int>&ds,vector<vector<int>>&v){
        if(ind>=nums.size()){
            v.push_back(ds);
            return ;
        }
        slove(ind+1,nums,ds,v);
        ds.push_back(nums[ind]);
        slove(ind+1,nums,ds,v);
        ds.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>v;
        vector<int>ds;
        slove(0,nums,ds,v);
        return v;
    }
};