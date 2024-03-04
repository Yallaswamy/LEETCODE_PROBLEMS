class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
       
        int n=tokens.size();
        if(n==0) return 0;
         if(tokens[0]>power) return 0;
        int i=0,j=n-1,maxi=0,f=0;
        while(i<=j){
            cout<<i<<" "<<j<<" ";
            if(tokens[i]<=power){
                cout<<maxi<<" ";
                if(f==1){
                    maxi=maxi-1;
                    cout<<"hi";
                    f=0;
                }
                maxi=maxi+1;
                power-=tokens[i];
                cout<<power<<" ";
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