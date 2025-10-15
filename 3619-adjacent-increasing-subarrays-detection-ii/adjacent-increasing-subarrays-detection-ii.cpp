class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int n = nums.size();
        int inc=1,preinc=0,maxi=0;
        for (int i=1;i<n;i++) {
            if (nums[i]>nums[i-1]){
                inc++;
            } else {
                preinc=inc;
                inc=1;
            }
            maxi=max(maxi, min(preinc,inc));
            maxi=max(maxi,inc/2);
        }
        return maxi;
    }
};