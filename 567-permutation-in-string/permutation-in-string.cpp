class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        if(n>m) return 0;
        map<char,int>mp,mp1;
        for(int i=0;i<n;i++){
            mp[s1[i]]++;
        }
        int j=0,i=0;
        while(j<m){
            mp1[s2[j++]]++;
            while(j-i==n){
                if(mp==mp1) return 1;
                mp1[s2[i]]--;
                if(mp1[s2[i]]==0) mp1.erase(s2[i]);
                i++;
            }
            
        }
        return 0;
    }
};