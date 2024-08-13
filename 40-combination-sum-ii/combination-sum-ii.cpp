class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& cand, int target) {
        sort(cand.begin(), cand.end());
        vector<vector<int>> res;
        vector<int> path;
        slove(cand, 0, target, path, res);
        return res;
    }
    
  void slove(vector<int>& cand, int cur, int target, vector<int>& path, vector<vector<int>>& res) {
        if (target == 0) {
            res.push_back(path);
            return;
        }
        if (target < 0) return;
        for (int i = cur; i < cand.size(); i++) {
            if (i > cur && cand[i] == cand[i - 1]) continue; 
            path.push_back(cand[i]);
            slove(cand, i + 1, target - cand[i], path, res);
            path.pop_back(); 
        }
    }
};