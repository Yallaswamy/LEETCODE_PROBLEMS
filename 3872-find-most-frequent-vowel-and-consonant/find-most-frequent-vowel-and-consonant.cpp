class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int>mp;
        int vmaxi=0,cmaxi=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o'  || s[i]=='u'  ){
                vmaxi=max(vmaxi,mp[s[i]]);
            }
            else{
                cmaxi=max(cmaxi,mp[s[i]]);
            }
        }
        return cmaxi+vmaxi;
    }
};