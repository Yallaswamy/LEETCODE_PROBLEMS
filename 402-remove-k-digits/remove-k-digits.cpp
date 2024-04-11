class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>s;
        string ans="";
        s.push(num[0]);
        for(int i=1;i<num.size();i++){
            while(!s.empty() and k!=0 and s.top()>num[i]){
                s.pop();
                k--;
            }
            s.push(num[i]);
        }
        while(!s.empty() and k>0){
            s.pop();
            k--;
        }
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(),ans.end());
         int i=0;
        while(i<ans.size() and ans[i]=='0')
            i++;
        if (i==ans.size()) return "0";
        return ans.substr(i);
    }
};