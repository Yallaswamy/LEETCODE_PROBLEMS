class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        map<int,int>mp;
        int j=0,i=0,c=0;
        while(j<nums.size()){
            mp[nums[j]]++;
            while(mp.size()>k) {
                mp[nums[i]]--;
                if(mp[nums[i]]==0){
                    mp.erase(nums[i]);
                }
                i++;
            }
            c+=(j-i+1);
            j++;
        }

        map<int,int>mp1;
        int j1=0,i1=0,c1=0;
        while(j1<nums.size()){
            mp1[nums[j1]]++;
            while(mp1.size()>k-1) {
                mp1[nums[i1]]--;
                if(mp1[nums[i1]]==0){
                    mp1.erase(nums[i1]);
                }
                i1++;
            }
            c1+=(j1-i1+1);
            cout<<j1-i1+1<<" "<<c1<<" "; 
            j1++;
        }
        return c-c1;
    }
};