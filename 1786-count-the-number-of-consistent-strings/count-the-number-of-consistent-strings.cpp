class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char,int>mp;
        for(auto it:allowed){
            mp[it]++;
        }
        int f=0,ans=0;
        for(auto it:words){
            f=0;
            for(auto it1:it){
                if(mp.find(it1)!=mp.end()){
                    continue;
                }
                else{
                    f=1;
                    break;
                }
            }
            if(f==0) ans+=1;
        }
        return ans;
    }
};