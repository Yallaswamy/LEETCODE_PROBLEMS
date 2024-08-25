class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k--){
            int mini=nums[0],ind=0;
            for(int i=1;i<nums.size();i++){
                if(nums[i]<mini){
                    mini=nums[i];
                    ind=i;
                }
            }
            nums[ind]=mini*multiplier;
        }
        return nums;
    }
};