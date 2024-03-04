class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int n=tokens.size();
        if(n==0) return 0;
        if(tokens[0]>power) return 0;
        int i=0,j=n-1,maxi=0,f=0;
        while(i<=j){
            if(tokens[i]<=power){
                if(f==1){
                    maxi=maxi-1;
                    f=0;
                }
                maxi=maxi+1;
                power-=tokens[i];
                i++;
            }
            else{
                power+=tokens[j];
                j--;
                f=1;
            }
        }
        return maxi;
    }
};