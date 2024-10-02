class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {

       // sort(arr.begin(),arr.end());
        map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        map<int,int>mp1;
        int i=1;
        for(auto it:mp){
            mp1[it.first]=i;
            i+=1;
        }
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            ans.push_back(mp1[arr[i]]);
        }
        return ans;
    }
};