class Solution {
public:
    int solve(int ind,vector<int>&arr,int k,int n,vector<int>&dp){
        if(ind>=n) return 0;
        int sum=0,ans=0,maxi=0;
        if(dp[ind]!=-1) return dp[ind];
        for(int i=ind;i<ind+k;i++){
            if(i>=n) continue; 
            maxi=max(maxi,arr[i]);
            ans=max(ans,(i-ind+1)*maxi+solve(i+1,arr,k,n,dp));
        }
        return dp[ind]=ans;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int ind=0;
        int ans=0;
        int n=arr.size();
        vector<int>dp(n+1,-1);
        //int n=arr.size();
        ans=solve(ind,arr,k,n,dp);
        return ans;
    }
};