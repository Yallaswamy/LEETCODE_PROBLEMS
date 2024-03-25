class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int>mp;
        vector<int>v;
        for(auto it:nums){
            mp[it]++;
            if(mp[it]>1){
                v.push_back(it);
            }
        }
        return v;
    }
};