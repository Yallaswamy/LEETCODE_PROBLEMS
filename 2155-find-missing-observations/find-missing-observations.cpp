class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int currtol=0;
        for(int i=0;i<rolls.size();i++){
            currtol+=rolls[i];
        }
        int reqtol=((rolls.size()+n)*mean)-currtol;
        if(reqtol>n*6  ) return {};
        if(reqtol<n) return {};
        int val=reqtol/n;
         int mod=reqtol%n;
         vector<int>ans(n,val);
         for(int i=0;i<mod;i++){
             ans[i]++;
         }

        return ans;
    }
};