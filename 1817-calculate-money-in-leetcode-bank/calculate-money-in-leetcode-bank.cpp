class Solution {
public:
    int totalMoney(int n) {
        int k=n/7,k1=n%7,s=0,ans=0;
        while(k){
            for(int i=1;i<=7;i++){
                ans+=(i+s);
            }
            s+=1;
            k=k-1;
        }
        for(int i=1;i<=k1;i++){
            ans+=(i+s);
        }
        return ans;

    }
};