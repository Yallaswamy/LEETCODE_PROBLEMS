class Solution {
public:
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long ans=0;
        int n=nums.size();
        int mid=n/2;
        if(nums[mid]==k) return 0;
        else if(nums[mid]<k){
            ans+=k-nums[mid];
            nums[mid]=k;
            for(int i=mid+1;i<n;i++){
                if(nums[i]>=nums[i-1]){
                    break;
                }
                else{
                    ans+=nums[i-1]-nums[i];
                    nums[i]=nums[i-1];
                }
            }
        }
        else if(nums[mid]>k){
            ans+=nums[mid]-k;
            nums[mid]=k;
            for(int i=mid-1;i>=0;i--){
                if(nums[i]<=nums[i+1]){
                    break;
                }
                else{
                    ans+=nums[i]-nums[i+1];
                    nums[i]=nums[i+1];
                }
            }
        }
        return ans;
    }
};