class Solution {
public:
    int solve(vector<int> &nums, int k, int i, vector<int> & temp){
        int n=nums.size();
        if(i==n){
            return 1;
        }
        int pick=0;
        int notpick=0;
        if(find(temp.begin(),temp.end(),nums[i]-k)==temp.end() and find(temp.begin(),temp.end(),nums[i]+k)==temp.end()){
            temp.push_back(nums[i]);
            pick=solve(nums,k,i+1,temp);
            temp.pop_back();
        }
        notpick=solve(nums,k,i+1,temp);
        return pick+notpick;

    }
    int beautifulSubsets(vector<int>& nums, int k) {
        vector<int> temp;
        return solve(nums,k,0,temp)-1;
        
    }
};