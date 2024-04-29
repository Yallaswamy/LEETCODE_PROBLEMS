class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int xor1=0;
        for(int i=0;i<nums.size();i++){
            xor1^=nums[i];
        }
        xor1=xor1^k;
        return __builtin_popcount(xor1);
        
    }
};