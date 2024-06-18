class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int,int>>v;
        for(int i=0;i<profit.size();i++){
            v.push_back({difficulty[i],profit[i]});
        }
        sort(v.begin(),v.end());
        sort(worker.begin(),worker.end());
        int k=0,sum=0,j=0;
        for(int i=0;i<worker.size();i++){
            while(j<v.size() and v[j].first<=worker[i]){
                k=max(k,v[j].second);
                j++;
            }
            sum+=k;
           
        }
        return sum;

    }
};