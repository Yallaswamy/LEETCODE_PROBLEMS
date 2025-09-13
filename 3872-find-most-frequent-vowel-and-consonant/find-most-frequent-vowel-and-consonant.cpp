class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int vmaxi=0,cmaxi=0;
        for(auto it:mp){
            if(it.first=='a' || it.first=='e' || it.first=='i' || it.first=='o'  || it.first=='u'  ){
                vmaxi=max(vmaxi,it.second);
            }
            else{
                cmaxi=max(cmaxi,it.second);
            }
        }
        return cmaxi+vmaxi;
    }
};