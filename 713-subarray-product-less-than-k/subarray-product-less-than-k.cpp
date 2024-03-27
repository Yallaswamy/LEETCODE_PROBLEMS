class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            int pro=1;
            for(int j=i;j<nums.size();j++){
                pro=pro*nums[j];
                if(pro<k){
                    c++;
                }
                if(pro>k){
                    break;
                }
            }
        }
        return c;
    }
};