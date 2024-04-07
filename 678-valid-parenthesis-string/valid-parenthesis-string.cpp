class Solution {
public:
    bool checkValidString(string s) {
        stack<int>st;
        stack<int>star;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(i);
            }
            else if(s[i]=='*'){
                star.push(i);
            }
            else if(s[i]==')'){
                if(st.empty() and star.empty()) return 0;
                else if(!st.empty()) st.pop();
                else star.pop();
            }
            else{
                return 0;
            }
        }
        while(!st.empty()){
            if(star.empty()) return 0;
            if(st.top()>star.top()) return 0;
            st.pop();
            star.pop();
        }
       
       return 1;
    }
};