class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n<3){
            cout<<"hi";
            return -1;
        }
        long long prefix[n];
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        for(int i=n-1;i>=1;i--){
            if(nums[i]<prefix[i-1]){
                return prefix[i];
            }
        }
        return -1;
    }
};