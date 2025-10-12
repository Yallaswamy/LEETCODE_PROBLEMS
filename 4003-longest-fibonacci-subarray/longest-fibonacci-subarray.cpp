class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi=0,maxi1=0,pre=0;
        for(int i=2;i<nums.size();i++){
            pre=nums[i-1]+nums[i-2];
            if(pre==nums[i]){
                maxi1+=1;
                cout<<maxi1<<" ";
            }
            else{
                maxi=max(maxi,maxi1);
                maxi1=0;
            }
        }
        maxi=max(maxi,maxi1);
        return maxi+2;

    }
};