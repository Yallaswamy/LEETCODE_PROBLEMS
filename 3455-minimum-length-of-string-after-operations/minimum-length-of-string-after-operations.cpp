class Solution {
public:
    int minimumLength(string s) {
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int ans=0;
        for(auto it:mp){
            int m=it.second;
            while(m>=3){
                m=m/3+m%3;
            }
            ans+=m;
            m=0;
        }
        return ans;
    }
};