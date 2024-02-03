class Solution {
public:
    int monkey(int ind,int sum,vector<int>&arr,int n,vector<vector<int>>&dp){
        if(ind>=n){
            return 0;
        }
        if(sum==0) return 1;
        if(dp[ind][sum]!=-1){
            return dp[ind][sum];
        }
        int pick=0;
        if(arr[ind]<=sum){
            pick=monkey(ind,sum-arr[ind],arr,n,dp);
        }
        int nonpick=monkey(ind+1,sum,arr,n,dp);
        return dp[ind][sum]=pick+nonpick;
    }
    int change(int amount, vector<int>& coins) {
        int ind=0;
        int ans=0;
        int n=coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        ans=monkey(ind,amount,coins,n,dp);
        return ans;
    }
};