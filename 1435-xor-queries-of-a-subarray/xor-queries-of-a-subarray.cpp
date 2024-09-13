class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) 
    {
        int n = arr.size(), l, r;
        vector<int> pre(n + 1);
        pre[0] = 0;
        for(int i = 1; i <= n; i++)
            pre[i] = pre[i - 1] ^ arr[i - 1];

        vector<int>ans;
        for(auto it:queries)
        {
            l = it[0], r = it[1] + 1;
            ans.push_back(pre[r] ^ pre[l]);
        }
        return ans;
    }
};