class Solution {
public:
    int minimumLength(string s) {
        int n=s.size();
        int i=0,j=n-1;
        int f=0;
        if(n==1) return 1;
        for(int i=0;i<n;i++){
            if(s[i]!=s[0]){
                f=1;
            }
        }
        if(f==0) return 0;
        while(i<=j){
            if(s[i]!=s[j]) return j-i+1;
            if(i==j) return 1;
            while(s[i]==s[j]){
                i++;
            }
            while(i-1>=0 and s[j]==s[i-1]){
               j--;
            }  
        }
        return 0;
       
    }
};