class Solution {
public:
void solve(int ind,int n,int k,vector<vector<int>>&v,vector<int>&ds){
    if(ds.size()==k){
        v.push_back(ds);
        return;
    }
    if(ind>n){
        return;
    }
    ds.push_back(ind);
    solve(ind+1,n,k,v,ds);
    ds.pop_back();
    solve(ind+1,n,k,v,ds);
}
    vector<vector<int>> combine(int n, int k) {
        vector<int>ds;
        vector<vector<int>>v;
        int ind=1;
        solve(ind,n,k,v,ds);
        return v;

    }
};