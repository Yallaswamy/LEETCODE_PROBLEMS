class Solution {
public:
    char kthCharacter(int k) {
        string ans="a";
        int len=ans.size();
        string ans1="";
        while(len<k){
            for(int i=0;i<len;i++){
                ans1+=(ans[i]-'a'+1)+'a';
            }
            ans+=ans1;
            len=ans.size();
            ans1="";
        }
        return ans[k-1];
    }
};