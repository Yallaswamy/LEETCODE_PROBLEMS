class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int prev=0,n=customers.size();
        double sum=0;
        for(auto it:customers){
            prev=max(prev,it[0]);
            prev+=it[1];
            sum+=(prev-it[0]);
        }
        return sum/n;
    }
};