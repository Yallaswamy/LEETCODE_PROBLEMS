class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i+=2){
            ans+=nums[i];
        }
        for(int i=1;i<nums.size();i+=2){
            ans-=nums[i];
        }
        return ans;
    }
};