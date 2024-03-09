class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        vector<int>v,v1;
        v.push_back(nums1[0]);
        v1.push_back(nums2[0]);
        for(int i=1;i<nums1.size();i++){
            if(nums1[i-1]!=nums1[i]){
                v.push_back(nums1[i]);
            }
        }
        for(int i=1;i<nums2.size();i++){
            if(nums2[i-1]!=nums2[i]){
                v1.push_back(nums2[i]);
            }
        }
        for( int i=0;i<max(v.size(),v1.size());i++){
            if(i<v.size()){
                 mp[v[i]]++;
            }
            if(i<v1.size()){
                mp[v1[i]]++;
            }
            if( i<v.size() and mp[v[i]]==2){
                return v[i];
            }
            else if(i<v1.size() and mp[v1[i]]==2){
                return   v1[i];
            }
        }
        return -1;
    }
};