class Solution {
public:
    void slove(int i,int tar,vector<vector<int>>&ans,vector<int>&ds,vector<int>&arr,int &sum){
        if(sum==tar){
            ans.push_back(ds);
            return ;
        }
        if(i>arr.size()-1 or tar>sum) return ;
        if(tar+arr[i]<=sum){
            ds.push_back(arr[i]);
            slove(i,tar+arr[i],ans,ds,arr,sum);
            ds.pop_back();
        }
        slove(i+1,tar,ans,ds,arr,sum);
        

    }
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        vector<vector<int>>ans;
        vector<int>ds;
        int n=c.size();
        slove(0,0,ans,ds,c,t);
        return ans;
    }
};