class Solution {
public:
   int dp[101][100001];
    int solve(int ind,vector<int>&arr,int sum,int n){
        if(sum==0) return 0;
        if(ind>=n){
            if(sum==0){
                return 0;
            }
            return 1e9;
        }
        if(dp[ind][sum]!=-1) return dp[ind][sum];
        int pick=1e9;
        if(sum>=arr[ind]){
            pick=1+solve(ind,arr,sum-arr[ind],n);
        }
        int nonpick=solve(ind+1,arr,sum,n);
        return dp[ind][sum]=min(pick,nonpick);
    }
    int coinChange(vector<int>& coins, int amount) {
        int ind=0;
        memset(dp,-1,sizeof(dp));
        int n=coins.size();
        int ans=solve(ind,coins,amount,n);
        if(ans==1e9) return -1;
        return ans;

    }
};