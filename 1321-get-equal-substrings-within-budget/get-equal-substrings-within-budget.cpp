class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int v=0,ans=0,j=0;
        for(int i=0;i<s.size();i++){
            v+=abs(s[i]-t[i]);
            while(j<=i and v>maxCost){
                v-=abs(s[j]-t[j]);
                j++;
            }
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};