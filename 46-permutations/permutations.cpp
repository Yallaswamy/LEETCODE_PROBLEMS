class Solution {
public:
    void solve(int ind,vector<int>& arr ,vector<vector<int>>& v){
        if(ind>=arr.size()){
            v.push_back(arr);
        }
        for(int i=ind;i<arr.size();i++){
            swap(arr[i],arr[ind]);
            solve(ind+1,arr,v);
            swap(arr[ind],arr[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>v;
        int ind=0;
        solve(ind,nums,v);
        return v;
    }
};