class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>v(score); 
        sort(score.begin(),score.end(),greater<int>());
        map<int,string>mp;
        if(score.size()==1) return {"Gold Medal"};
        vector<string>ans;
            mp[score[0]]="Gold Medal";
            mp[score[1]]="Silver Medal";
            if(score.size()>2)
            mp[score[2]]="Bronze Medal";
            int j=4;
            for(int i=3;i<score.size();i++){
                mp[score[i]]=to_string(j);
                j++;
            }
            for(auto it:mp){
                cout<<it.first<<" "<<it.second<<" ";
            }
           
            for(int i=0;i<v.size();i++){
                ans.push_back(mp[v[i]]);
            }
        
        return ans;

    }
};