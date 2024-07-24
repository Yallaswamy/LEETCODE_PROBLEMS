class Solution {
public:
    static bool comp(const pair<int,int>&a,const pair<int,int>&b){
        if(a.first==b.first){
            return a.second<b.second;
        }
        else{
            return a.first<b.first;
        }
    }
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        map<int,int>mp;
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++){
            string s=to_string(nums[i]);
            int ans1=0;
            for(int i=0;i<s.size();i++){
                    ans1=ans1*10+mapping[s[i]-'0'];
            }
            v.push_back({ans1,i});
        }
       
        sort(v.begin(),v.end(),comp);
        vector<int>ans;
        for(auto &it:v){
            int ind=it.second;
            ans.push_back(nums[ind]);
        }
        return ans;
    }
};