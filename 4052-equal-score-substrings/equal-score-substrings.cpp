class Solution {
public:
    bool scoreBalance(string s) {
        int ans1=0,ans2=0;
        for(int i=0;i<s.size();i++){
            ans1+=s[i]-'0'-48;
            ans2=0;
            for(int j=i+1;j<s.size();j++){
                ans2+=(s[j]-'0')-48;
            }
            if(ans1==ans2){
                return 1;
            }
        }
        return 0;
       
    }
};