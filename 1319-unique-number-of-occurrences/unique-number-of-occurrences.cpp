class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
        set<int>st;
        vector<int>v;
        for(auto it:arr){
            mp[it]++;
        }
        for(auto it:mp){
            st.insert(it.second);
            v.push_back(it.second);
        }
        return (st.size()==v.size());

    }
};