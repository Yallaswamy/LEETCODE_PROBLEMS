class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n=s.size();
        vector<int>pre(n+1,0);
        for(auto it:shifts){
            if(it[2]){
                pre[it[0]]++;
                pre[it[1]+1]--;
            }
            else{
                pre[it[0]]--;
                pre[it[1]+1]++;
            }
        }
        for(int i=0;i<n;i++){
            pre[i+1]+=pre[i];

        }
        for(int i=0;i<n;i++){
            s[i]=((s[i]-'a')+(pre[i]%26+26))%26+'a';
        }
        return s;
    }
};