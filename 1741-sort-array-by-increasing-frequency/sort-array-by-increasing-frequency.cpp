class Solution {
public:
   static bool comp(const pair<int,int>&a,const pair<int,int>&b){
        if(a.second==b.second){
            return a.first>b.first;
        }
        else{
            return a.second<b.second;
        }
    }
    vector<int> frequencySort(vector<int>& nums) {
       map<int,int>mp;
        vector<int>v1;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
       vector<pair<int,int>>v(mp.begin(),mp.end());
       sort(v.begin(),v.end(),comp);
       for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].second;j++){
                v1.push_back(v[i].first);
            }
       }
        return v1;
    }
};