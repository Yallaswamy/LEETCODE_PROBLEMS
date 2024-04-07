class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc=nums[0];
        int c=1,maxi=0;;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                c+=1;
            }
            else{
                maxi=max(maxi,c);
                c=1;
            }
        }
        int dec=nums[0];
        int c1=1,maxi1=0;;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]){
                c1+=1;
            }
            else{
                maxi1=max(maxi1,c1);
                c1=1;
            }
        }
       maxi=max(maxi,c);
       maxi1=max(maxi1,c1);
        return max(maxi,maxi1);
    }
};