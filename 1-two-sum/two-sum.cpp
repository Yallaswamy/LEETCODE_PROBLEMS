class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tar) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int com=tar-nums[i];
            if(mp.find(com)!=mp.end()){
                return {mp[com],i};
            }
            mp[nums[i]]=i;
        }
       return {-1,-1};
    }
};