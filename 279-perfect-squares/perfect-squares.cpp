class Solution {
public:
int dp[101][10001];
    int solve(int ind,vector<int>&v,int sum,int m){
        if(ind>=m) return 1e9;
        if(sum==0) return 0;
        if(dp[ind][sum]!=-1) return dp[ind][sum];
        int pick=INT_MAX;
        if(sum>=v[ind]){
            pick=1+solve(ind,v,sum-v[ind],m);
        }
        int nonpick=solve(ind+1,v,sum,m);
        return dp[ind][sum]=min(pick,nonpick);
    }
    int numSquares(int n) {
        vector<int>v;
        for(int i=1;i*i<=n;i++){
            v.push_back(i*i);
        }
        memset(dp,-1,sizeof(dp));
        int ans=0;
        int m=v.size(),ind=0;
        ans=solve(ind,v,n,m);
        return ans;

    }
};