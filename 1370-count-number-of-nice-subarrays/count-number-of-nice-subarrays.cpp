class Solution {
public:
    int atmost(vector<int>& nums,int k){
        int i=0,j=0,n=nums.size(),c=0,ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]&1){
                c+=1;
            }
            while(c>k){
                if(nums[j]&1){
                    c--;
                }
                j++;
            }
            ans+=i-j+1;
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);
    }
};