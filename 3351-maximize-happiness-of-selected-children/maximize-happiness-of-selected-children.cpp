class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end(),greater<int>());
        long long ans=0,diff=0,i=0;
        while(k--){
            int val=happiness[i]-diff;
            diff+=1;
            i++;
            if(val>0) ans+=val;
        }
        return ans;
    }
};