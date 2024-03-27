class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1 ) return 0;
        int ans=0;
        int res=1;
        int j=0;
        for(int i=0;i<nums.size();i++){
            res=res*nums[i];
            while(res>=k){
                res=res/nums[j];
                j++;
            }
            ans=ans+(i-j+1);
        }
        return ans;
        
    }
};