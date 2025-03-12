class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int c=0,p=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0) c=c+1;
            else if(nums[i]>0) p=p+1;
            else continue;
        }
        return max(c,p);
    }
};