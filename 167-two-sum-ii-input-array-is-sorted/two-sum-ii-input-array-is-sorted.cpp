class Solution {
public:
    vector<int> twoSum(vector<int>&arr, int t) {
        map<int,int>mp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            mp[arr[i]]=i+1;
        }
        for(int i=0;i<n;i++){
            if(mp.find(t-arr[i])!=mp.end()){
                return {i+1,mp[t-arr[i]]};
                
            }
        }   
        return {};
    }
};