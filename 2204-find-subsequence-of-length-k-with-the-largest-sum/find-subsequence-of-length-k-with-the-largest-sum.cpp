class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        int n = nums.size();
        for(int i=0;i<n;i++){
            pq.push({nums[i],i});
            if(pq.size() > k) pq.pop();
        }
        vector<int>v;
        while(!pq.empty()){
            v.push_back(pq.top().second);
            pq.pop();
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            v[i] = nums[v[i]];
        }
        return v;
    }
};