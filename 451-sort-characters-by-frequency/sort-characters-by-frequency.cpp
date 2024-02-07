class Solution {
public:
   static bool cmp( pair<char,int>&a,pair<char,int>&b){
    if(a.first!=b.first){
        return a.second>b.second;
    }
    return a.second<b.second;
}

    string frequencySort(string s) {
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
       vector<pair<char,int>>v(mp.begin(),mp.end());
        sort(v.begin(),v.end(),cmp);
        string ans="";
        for(auto it:v){
           while(it.second){
               ans+=it.first;
               it.second--;
           }
        }
       
        return ans;
    }
};