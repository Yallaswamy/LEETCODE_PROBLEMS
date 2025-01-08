class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size()-2;i++){
            if((nums[i]+nums[i+2])==(int)(nums[i+1])/2.0){
                ans++;
            }
            cout<<i+1;
            cout<<nums[i+1]/2;
        }
        return ans;
    }
};