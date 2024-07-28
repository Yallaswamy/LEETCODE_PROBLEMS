class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int s=0,d=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<10){
                s+=nums[i];
            }
            else{
                d+=nums[i];
            }
        }
        if(s==d) return 0;
        return 1;

    }
};