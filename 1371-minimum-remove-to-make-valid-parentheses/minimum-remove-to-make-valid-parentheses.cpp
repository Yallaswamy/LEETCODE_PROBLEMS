class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<char>st;
        string str;
        int open=0,close=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                open++;
            }
            else if(s[i]==')'){
                close++;
            }
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
        cout<<op<<" "<<close;
        return str;

    }
};