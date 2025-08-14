class Solution {
public:
    string largestGoodInteger(string num) {
        string ans="";
        int n=-1;
        for(int i=1;i<num.size()-1;i++){
            if(num[i-1]==num[i] and num[i]==num[i+1]){
                if(n<num[i]-'0'){
                    n=num[i]-'0';
                }
            }
        }
        if(n==-1){
            return "";
        }
        else{
            char demmy=n+'0';
            ans+=demmy;
            ans+=demmy;
            ans+=demmy;
            return ans;
        }

    }
};