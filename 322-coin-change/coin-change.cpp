class Solution {
public:
    int monkey(int ind,vector<int>&arr,int sum,int n,vector<vector<int>>&dp){
        if(sum==0)return 0;
        if(ind>=n){
            if(sum==0){
                return 0;
            }
            return 1e9;
        }
        if(dp[ind][sum]!=-1) return dp[ind][sum];
         int pick=1e9;
        if(sum>=arr[ind]){
           pick=1+monkey(ind,arr,sum-arr[ind],n,dp);
        }
       int  nonpick=monkey(ind+1,arr,sum,n,dp);
       return dp[ind][sum]=min(pick,nonpick);

    }
    int coinChange(vector<int>& coins, int amount) {
        int ind=0;
        int n=coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        int ans =  monkey(ind,coins,amount,n,dp);
        if(ans==1e9)  return -1;
        return ans;
    }
};