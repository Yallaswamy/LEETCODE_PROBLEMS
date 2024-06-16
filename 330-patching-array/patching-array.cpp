class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long long rn=0,i=0,c=0;
        while(rn<n){
            if(i<nums.size() and nums[i]<=rn+1){
                rn+=nums[i];
                i++;
            }
            else{
                rn+=(rn+1);
                c++;
            }
        }
        return c;
    }
};