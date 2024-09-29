class Solution {
public:
    long long maximumTotalSum(vector<int>& maximumHeight) {
        sort(maximumHeight.begin(),maximumHeight.end());
        long long n=maximumHeight.size();
       int maxi=maximumHeight[n-1];
        long long sum=0;
        for(int i=n-1;i>=0;i--){
            maxi=min(maxi,maximumHeight[i]);
            if(maxi<1) return -1;
            sum+=maxi;
            maxi--;
        }
        return sum;
       
    }
};