class Solution {
public:
    int minimumLevels(vector<int>& nums) {
        int ans=INT_MAX,sum=0,sum1=0,i=0,j=0;
        vector<int>Dan,Bob;
        for( i=0;i<nums.size()-1;i++){
            if(nums[i]==1) sum+=1;
            else sum-=1;
            Dan.push_back(sum);
        }
        for(j=nums.size()-1;j>0;j--){
                if(nums[j]==1) sum1+=1;
                else sum1-=1;
                Bob.push_back(sum1);
        }
        for(int i=0;i<Dan.size();i++){
            if(Dan[i]>Bob[Dan.size()-i-1]){
                return i+1;
            }
        }
        return -1;
    }
};