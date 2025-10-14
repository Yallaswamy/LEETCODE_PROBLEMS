class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int inc=1,preinc=0,maxi=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                inc+=1;
            }else{
                preinc=inc;
                inc=1;
            }
            maxi=max(maxi,min(preinc,inc));
            maxi=max(maxi,inc/2);
        }
        return maxi>=k;
    }

};