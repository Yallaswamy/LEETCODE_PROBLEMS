class Solution {
public:
    int maxScore(string s) {
        int ans=0;
        for(int i=0;i<s.size()-1;i++){
            int c=0;
            for(int j=0;j<=i;j++){
                if(s[j]=='0'){
                    c+=1;
                }
            }
            for(int k=i+1;k<s.size();k++){
                if(s[k]=='1'){
                    c+=1;
                }
            }
            ans=max(ans,c);
        }
        return ans;
    }
};