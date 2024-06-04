class Solution {
public:
    int longestPalindrome(string s) {
        map<int,int>mp;
        for(auto it:s){
            mp[it]++;
        }
        int c=0;
        for(auto it:mp){
            if(it.second%2==0){
                c+=it.second;
            }
            else if((it.second-1)%2==0){
                c+=it.second-1;
            }
        }
        if(s.size()>c) return c+1;
        else return c;
    }
};