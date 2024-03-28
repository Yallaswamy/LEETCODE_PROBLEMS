class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int maxi=0,i=0,j=0,ans=0,f=0;
        map<int,int>mp;
        for(i=0;i<nums.size();i++){
            mp[nums[i]]++;
            while(mp[nums[i]]>k){
                mp[nums[j]]--;
                j++;
            }
            maxi=max(maxi,i-j+1);
        }
        return maxi;
    }
};