class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        map<char,int>mp;
        int n1=tasks.size();
        for(int i=0;i<tasks.size();i++){
            mp[tasks[i]]++;
        }
        int maxi=0;
        for(auto it:mp){
            maxi=max(maxi,it.second);
        }
        int c=0;
        for(auto it:mp){
            if(it.second==maxi){
                c++;
            }
        }
        int ans=(maxi-1)*(n+1)+c;
        return max(ans,n1);
    }
};