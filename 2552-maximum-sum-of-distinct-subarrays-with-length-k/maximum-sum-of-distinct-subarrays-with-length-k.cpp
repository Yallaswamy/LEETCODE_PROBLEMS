class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long maxi=0,sum=0,j;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            sum+=nums[i];
            if(i>=k){
                mp[nums[i-k]]--;
                sum-=nums[i-k];
                if(mp[nums[i-k]]==0){
                    mp.erase(nums[i-k]);
                }
            }
            if(i>=k-1 and mp.size()==k){
                maxi=max(maxi,sum);
            }
        }
        return maxi;
    }
};