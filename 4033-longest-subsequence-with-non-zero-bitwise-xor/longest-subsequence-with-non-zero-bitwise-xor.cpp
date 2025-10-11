class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int ans=0;
        int zero=1;
        for(int i=0;i<nums.size();i++){
            ans=ans^nums[i];
            if(nums[i]!=0){
                zero=0;
            }
        }
        if(zero) return 0;
        if(ans!=0) return nums.size();
        else return nums.size()-1;
    }
};