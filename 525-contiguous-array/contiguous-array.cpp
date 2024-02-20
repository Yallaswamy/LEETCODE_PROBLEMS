class Solution {
public:
    int findMaxLength(vector<int>& nums) {
       int zero=0,ans=0;
       map<int,int> mp;
       for(int i=0;i<nums.size();i++){
           if(nums[i]==0){
               zero++;
           }
           else{
               zero--;
           }
           if(zero==0)ans=max(ans,i+1);
           if(mp.find(zero)!=mp.end())ans=max(ans,i-mp[zero]);
           else
           mp[zero]=i;
       }
       return ans;
        

    }
};