class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        for(auto it:nums1){
            mp[it]++;
        }
        vector<int>v;
        for(int i=0;i<nums2.size();i++){
            if(mp.find(nums2[i])!=mp.end()){
                v.push_back(nums2[i]);
                mp[nums2[i]]--;
                if(mp[nums2[i]]<=0){
                    mp.erase(nums2[i]);
                }
            }
        }
        return v;
    }
};