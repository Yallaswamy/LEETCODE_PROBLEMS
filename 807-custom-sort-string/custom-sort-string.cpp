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
                   ans+=string(mp[order[i]],order[i]);
                   mp[order[i]]=0;
               }
        }
        for(auto it:mp){
            if(it.second>0){
                ans+=string(it.second,it.first);
            }
        }
        return ans;
    }
};