class Solution {
public:
    int minOperations(int k) {
        int temp=1;
        int c=0;
        int ans=INT_MAX;
        for(int i=1;i<=k;i++){
            c=0;
            temp=1;
            while(temp<i){
                temp++;
                c++;
            }
            while(temp<k){
                temp+=i;
                c++;
            }
            ans=min(ans,c);
        }
        return ans;
    }
};