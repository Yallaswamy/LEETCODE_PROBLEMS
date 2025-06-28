class Solution {
public:
    bool isprime(int n){
        if(n<=1){
            return false;
        }
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    bool checkPrimeFrequency(vector<int>& nums) {
        map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        for(auto it:mp){
            if(isprime(it.second)){
                return true;
            }
        }
        return false;
    }
};