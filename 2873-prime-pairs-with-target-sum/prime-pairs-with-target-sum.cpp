class Solution {
public:
    bool isprime(int n){
        if(n<=1) return 0;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return 0;
            }
        }
        return 1;


    }
    vector<vector<int>> findPrimePairs(int n) {
        vector<vector<int>>v;
        for(int i=1;i<=n/2;i++){
            if(isprime(n-i) and isprime(i)){
                v.push_back({i,n-i});
            }
        }
        sort(v.begin(),v.end());
        return v;
    }
};