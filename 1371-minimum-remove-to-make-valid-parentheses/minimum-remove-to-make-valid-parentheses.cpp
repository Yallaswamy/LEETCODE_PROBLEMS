class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string str;
        int open=0,close=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') open++;
            else if(s[i]==')') close++;
        }
        int op=0,co=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('  and op<close ){
                op++;
                str+=s[i];
            }
            else if(s[i]==')' and op>co ){
                co++;
                str+=s[i];
            }
            else if (s[i]!='(' and s[i]!=')'){
                str+=s[i];
            }
            else if (s[i]==')'){
                close--;
            }
        }
        return str;

    }
};