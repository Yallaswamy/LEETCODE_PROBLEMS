class Solution {
public:

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>v;
         int n=nums.size();
         for(int i=0;i<(1<<n);i++){
             vector<int>v1;
             for(int j=0;j<n;j++){
                 if(i&(1<<j)){
                     v1.push_back(nums[j]);
                 }
             }
             v.push_back(v1);
         }
         return v;
    }
};