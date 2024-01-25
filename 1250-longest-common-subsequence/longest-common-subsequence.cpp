class Solution {
public:
    int solve(int ind1,int ind2 ,string &text1, string &text2,int n1,int n2,vector<vector<int>>&dp){
        if(ind1>n1) return 0;
        if(ind2>n2) return 0;
        int pick=0;
        if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];
        if(text1[ind1]==text2[ind2]){
            pick=1+solve(ind1+1,ind2+1,text1,text2,n1,n2,dp);
        }
        int nonpick=max(solve(ind1+1,ind2,text1,text2,n1,n2,dp),solve(ind1,ind2+1,text1,text2,n1,n2,dp));
        return dp[ind1][ind2]=max(pick,nonpick);
    }

    int longestCommonSubsequence(string text1, string text2) {
        int n1=text1.size(),n2=text2.size();
        vector<vector<int>>dp(n1,vector<int>(n2,-1));
        int ind0=0,ind1=0;
        return  solve(ind0,ind1,text1,text2,n1-1,n2-1,dp);

    }
};