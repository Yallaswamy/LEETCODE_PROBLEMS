class Solution {
public:
    int dp[201][20001];
    bool monkey(int ind,vector<int>&arr,int sum,int n){
        if(ind>=n){
            if(sum==0) return 1;
            return 0;
        }
        if(sum==0) return 1;
        if(dp[ind][sum]!=-1) return dp[ind][sum];
        int pick=0;
        if(arr[ind]<=sum){
            pick=monkey(ind+1,arr,sum-arr[ind],n);
        }
        int nonpick=monkey(ind+1,arr,sum,n);
        return dp[ind][sum]=(pick or nonpick);
    }
    bool canPartition(vector<int>& nums) {
        int ind=0;
        int sum=0;
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum&1) return 0;
        int tar=sum/2;
        int n=nums.size();
        return monkey(ind,nums,tar,n);
    }
};