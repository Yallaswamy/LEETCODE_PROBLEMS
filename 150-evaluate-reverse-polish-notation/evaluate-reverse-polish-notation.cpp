class Solution {
public:
    int evalRPN(vector<string>& t) {
        stack<int>st;
        for(int i=0;i<t.size();i++){
            if(t[i]!="+" and t[i]!="-" and t[i]!="*" and t[i]!="/"){
               // cout<<t[i]<<" ";
                st.push(stoi(t[i]));
            }
            else {
                int sec=st.top();
                st.pop();
                int fir=st.top();
                st.pop();
                if(t[i]=="+"){
                    st.push(fir+sec);
                }
                else if(t[i]=="-"){
                    st.push(fir-sec);
                }
                else if(t[i]=="*"){
                    st.push(fir*sec);
                }
                else if(t[i]=="/"){
                    st.push(fir/sec);
                }
            }
        }
        return st.top();
    }
};