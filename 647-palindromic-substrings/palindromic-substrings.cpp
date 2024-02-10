class Solution {
public:
    int countSubstrings(string s) {
        int c=0;
        string str="";
        for(int i=0;i<s.size();i++){
            str="";
            for(int j=i;j<s.size();j++){
                 str=str+s[j];
                if(str==string(str.rbegin(),str.rend())){
                    c+=1;
                }
            }
        }
        return c;
    }
};