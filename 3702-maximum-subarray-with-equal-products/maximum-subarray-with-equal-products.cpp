class Solution {
public:
    int maxLength(vector<int>& nums) {
        int pro=1,lcm1=0,gcd1=0,ans=0,j;
        for(int i=0;i<nums.size();i++){
            pro=nums[i],lcm1=nums[i],gcd1=nums[i];
            for( j=i+1;j<nums.size();j++){
                pro=pro*(long long)nums[j];
                lcm1=lcm(lcm1,nums[j]);
                gcd1=gcd(gcd1,nums[j]);
                if(pro==lcm1*gcd1){
                    ans=max(ans,j-i+1);
                }
            }
            
           
        }
        return ans;
    }
};