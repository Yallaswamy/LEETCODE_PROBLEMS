class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long mini=-1,maxi=-1,curr=-1,ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<minK || nums[i]>maxK) curr=i;
            if(nums[i]==minK){
                mini=i;
            }
            if(nums[i]==maxK){
                maxi=i;
            }
            int len=min(mini,maxi)-curr;
            if(len>0){
                ans+=len;
            }
        }
        return ans;
    }

};