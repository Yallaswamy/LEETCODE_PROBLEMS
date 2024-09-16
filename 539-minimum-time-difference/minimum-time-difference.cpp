class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>v;
        for(auto it: timePoints){
            int h = (it[0]-'0')*10 + (it[1]-'0');
            int m = (it[3]-'0')*10 + (it[4]-'0');

            int min = h*60 + m;
            v.push_back(min);
        }
        sort(v.begin(),v.end());
        int ans = INT_MAX;
        for(int i=1; i<v.size(); i++){
            ans = min(v[i]-v[i-1],ans);
        }
        return min(ans,1440+v[0] - v.back());
    }
};