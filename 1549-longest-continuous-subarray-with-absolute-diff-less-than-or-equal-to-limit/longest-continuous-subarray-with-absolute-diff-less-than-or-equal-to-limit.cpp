class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int maxi=0,mini=INT_MAX,res=1;;
        for(int i=0;i<nums.size()-1;i++){
            if(nums.size()-i<res) break;
            maxi=nums[i];
            mini=nums[i];
            for(int j=i+1;j<nums.size();j++){
                maxi=max(nums[j],maxi);
                mini=min(nums[j],mini);
                if(maxi-mini<=limit){
                    res=max(res,j-i+1);
                }
                else{
                    break;
                }
            }
        }
        return res;
    }
};