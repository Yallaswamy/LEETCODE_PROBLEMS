class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxi=*max_element(nums.begin(),nums.end());
        long long  c=0,i=0,j=0,ans=0;
        while(j<nums.size()){
            if(nums[j]==maxi) c++;
            while(c>=k){
                ans+=nums.size()-j;
                if(nums[i]==maxi){
                    c--;
                }
                i++;
            }
            j++;
        }

        return ans;
    }
};