class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        long long i=0,j=skill.size()-1;
        long long sum=skill[0]+skill[j];
        long long ans=0;
        while(i<j){
            if(skill[i]+skill[j]!=sum){
                return -1;
            }
            else{
                ans+=(long long)skill[i]*skill[j];

            }
            i++;
            j--;
        }
        return ans;
    }
};