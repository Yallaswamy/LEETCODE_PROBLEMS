class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
        int j=0;
        while(j<intervals.size()){
            if(intervals[j][1]<newInterval[0]){
                ans.push_back(intervals[j]);
            }
            else if(intervals[j][0]>newInterval[1]) break;
            else{
                newInterval[0]=min(newInterval[0],intervals[j][0]);
                newInterval[1]=max(newInterval[1],intervals[j][1]);
            }
            j++;
        }
        ans.push_back(newInterval);
        while(j<intervals.size()){
            ans.push_back(intervals[j++]);
        }
        return ans;
    }
};