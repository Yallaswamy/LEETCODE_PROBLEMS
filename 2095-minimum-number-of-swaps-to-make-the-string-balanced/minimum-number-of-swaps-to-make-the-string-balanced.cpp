class Solution {
public:
    int minSwaps(string s) {
        int open=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='['){
                open+=1;
            }
            else if(open){
                open-=1;
            }
        }
        return (open+1)/2;
    }
};