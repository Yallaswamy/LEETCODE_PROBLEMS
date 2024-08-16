class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int mini=arrays[0].front(),maxi=arrays[0].back(),ans=0;
        for(int i=1;i<arrays.size();i++){
            int cmini=arrays[i].front();
            int cmax=arrays[i].back();
            ans=max(ans,abs(cmax-mini));
            ans=max(ans,abs(maxi-cmini));
            mini=min(mini,cmini);
            maxi=max(maxi,cmax);
        }
        return ans;
    }
};