class Solution {
public:
    int minSteps(int n) {
       int ans=0;
       int i=2;
       while(i<=n){
        if(n%i==0){
            n=n/i;
            ans+=i;
        }
        else i++;
       }
       return ans;

    }
};