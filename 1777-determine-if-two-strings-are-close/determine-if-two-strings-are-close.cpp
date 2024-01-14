class Solution {
public:
    bool closeStrings(string word1, string word2) {
      map<char,int>mp,mp1;
        set<char>s1(word1.begin(), word1.end());
        set<char>s2(word2.begin(), word2.end());
        if(s1!=s2){
            return 0;
        }
      if(word1.size()!=word2.size()){
          return 0;
      }
      for(int i=0;i<word1.size();i++){
          mp[word1[i]]++;
      }
       for(int i=0;i<word2.size();i++){
          mp1[word2[i]]++;
      }
      vector<int>v,v1;
      for(auto it:mp){
          v.push_back(it.second);
      }
      for(auto it:mp1){
          v1.push_back(it.second);
      }
      sort(v.begin(),v.end());
      sort(v1.begin(),v1.end());
      for(int i=0;i<v.size();i++){
          cout<<v[i]<<" ";
      }
      for(int i=0;i<v1.size();i++){
          cout<<v1[i]<<" ";
      }
    for(int i=0;i<v.size();i++){
        if(v[i]!=v1[i]){
            return 0;
        }
    }
    return 1;
    }
};