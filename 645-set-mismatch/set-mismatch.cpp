class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>v;
        map<int,int>mp;
        int k=0;
        for(auto it:nums){
            mp[it]++;
            if(mp[it]>1){
                k=it;
                break;
            }
        }
        int n=nums.size();
        int sum=(n*(n+1))/2;
        int s=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
        }
        s=s-k;
        return {k,sum-s};

    }
};