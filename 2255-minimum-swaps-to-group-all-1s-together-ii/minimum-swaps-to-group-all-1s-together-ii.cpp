class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size(),ans=INT_MAX,c=0,i=0;
        int k=count(begin(nums),end(nums),1);
        if(k==n || k==0)
            return 0;
        for(int j=0;j<(n+k-1);j++){
            if(nums[j%n]==0)
                c++;
            while(abs(i-j)+1>=k){
                ans=min(ans,c);
                if(nums[i]==0)
                    c--;
                i++;
            }
        }
        return ans;
    }
};