class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        vector<int>v,v1;
        v1=nums;
        for(int i=0;i<nums.size();i++){
            v.push_back(__builtin_popcount(nums[i]));
        }
        int ind1=0,ind2=0;
        for(int i=1;i<v.size();i++){
            if(v[i]-v[i-1]==0){
                ind2+=1;
            }
            else{
               //// cout<<ind1<<" "<<ind2;
                sort(nums.begin()+ind1,nums.begin()+ind2+1);
                ind1=i;
                ind2=i;
                
            }
        }
       // cout<<ind1<<" "<<ind2;
        sort(nums.begin()+ind1,nums.begin()+ind2+1);
        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }
        sort(v1.begin(),v1.end());
        return v1==nums;
    }
};