class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
         int j=0,ans=INT_MIN,sum=0;
        // for(int i=0;i<nums.size();i++){
        //     sum+=nums[i];
        //     if(i-j+1 > sum+k){
        //         sum-=nums[j];
        //         j++;
        //     }
        //     ans=max(ans,i-j+1);
        // }
        // return ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) sum+=1;
            while(sum>k){
                if(nums[j]==0) sum--;
                j++;
            }
            ans=max(ans,i-j+1);
        }
        return ans;
    }

};