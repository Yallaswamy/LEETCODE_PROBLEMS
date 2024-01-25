class Solution {
public:
    int solve(string &text1, string &text2,int n1,int n2,vector<vector<int>>&dp){
        if(n1<0) return 0;
        if(n2<0) return 0;
        int pick=0;
        if(dp[n1][n2]!=-1) return dp[n1][n2];
        if(text1[n1]==text2[n2]){
            pick=1+solve(text1,text2,n1-1,n2-1,dp);
        }
        int nonpick=max(solve(text1,text2,n1-1,n2,dp),solve(text1,text2,n1,n2-1,dp));
        return dp[n1][n2]=max(pick,nonpick);
    }

    int longestCommonSubsequence(string text1, string text2) {
        int n1=text1.size(),n2=text2.size();
        vector<vector<int>>dp(n1,vector<int>(n2,-1));
      
        return  solve(text1,text2,n1-1,n2-1,dp);

    }
};