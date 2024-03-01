class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.size();
        int c=0,f=0;
        string ans="";
        for(int i=0;i<n;i++){
            if(s[i]=='1' and f==1){
                ans+='1';
                c+=1;
            }
            if(s[i]=='1'){
                f=1;
            }
        }
        for(int i=c;i<n-1;i++){
            ans+='0';
        }
        ans+='1';
        return ans;
       
        
    }
};