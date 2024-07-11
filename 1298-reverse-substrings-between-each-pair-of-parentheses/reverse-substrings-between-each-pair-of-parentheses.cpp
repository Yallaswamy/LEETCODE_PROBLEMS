class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>st;
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') st.push(i);
            else if(s[i]==')') {
                int f=st.top()+1;
                int l=i;
                reverse(s.begin()+f,s.begin()+l);
                st.pop();
            }
        }
        for(auto it:s){
            if(it!=')' and it!='(') ans+=it;
        }
        return ans;
    }
};