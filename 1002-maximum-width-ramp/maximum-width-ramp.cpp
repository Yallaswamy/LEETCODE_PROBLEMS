
class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
        vector<int>rightmax(n, -1);
        rightmax[n-1]=nums[n-1];
        for (int i=n - 2;i>=0;i--) {
            rightmax[i]=max(rightmax[i+1],nums[i]);
        }
        int left=0;
        int right=0;
        int maxi=0;
        while (right<n) {
            if (rightmax[right]>=nums[left]) {
                maxi=max(maxi,right-left);
                right++;
            } else {
                left++;
            }
        }
        return maxi;
    }
};