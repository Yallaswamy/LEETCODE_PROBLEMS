class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>mp;
        map<char,int>mp1;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end()){
                if(mp[s[i]]!=t[i]) return 0;
            }
            else{
                if(mp1[t[i]]==0){
                    mp[s[i]]=t[i];
                    mp1[t[i]]++;
                }
                else{
                     return 0;
                }
                
               
            }
        }
        return 1;

    }
};