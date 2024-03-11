class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        string ans="";
        for(int i=0;i<order.size();i++){
            if(mp[order[i]]>0){
                while(mp[order[i]]){
                    ans+=order[i];
                    mp[order[i]]--;
                }
                //mp[order[i]]=0;;
            }
        }
        for(auto it:mp){
            if(it.second>0){
                while(it.second>0){
                    ans+=it.first;
                    it.second--;
                }
            }
        }
        return ans;
    }
};