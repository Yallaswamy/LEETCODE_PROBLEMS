class Solution {
public:
    
    vector<vector<int>> findPrimePairs(int n) {
        vector<int>isprime(n+1,1);
        isprime[0]=0;
        isprime[1]=0;
        for(int i=2;i*i<=n;i++){
            if(isprime[i]){
                for(int j=i*i;j<=n;j+=i){
                    isprime[j]=0;
                }
            }
        }

        vector<vector<int>>v;
        for(int i=1;i<=n/2;i++){
            if(isprime[n-i] and isprime[i]){
                v.push_back({i,n-i});
            }
        }
      //  sort(v.begin(),v.end());
        return v;
    }
};