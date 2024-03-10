class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp,mp1;
        for(int i=0;i<nums1.size();i++){
            mp[nums1[i]]++;
        }
        vector<int>v;
        sort(nums2.begin(),nums2.end());
        if(mp[nums2[0]]){
            v.push_back(nums2[0]);
        }
        for(int i=1;i<nums2.size();i++){
            if(nums2[i-1]!=nums2[i]){
                 if(mp[nums2[i]]){
                    v.push_back(nums2[i]);
                 }
            }
        }
        return v;
        

    }
};