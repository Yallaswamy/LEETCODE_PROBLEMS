class Solution {
public:
    int solve(int ind,vector<int>& arr,vector<int>&dp){
        int pick=0,nonpick=0;
        if(ind>=arr.size()){
            return 0;
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }
        pick=arr[ind]+solve(ind+2,arr,dp);
        nonpick=solve(ind+1,arr,dp);
        return dp[ind]=max(pick,nonpick);
        
    }
    int rob(vector<int>& nums) {\
    vector<int>dp(nums.size()+1,-1);
        int ind=0;
        int k=solve(ind,nums,dp);
        return k;
    }
};