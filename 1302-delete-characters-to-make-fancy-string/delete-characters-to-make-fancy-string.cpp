class Solution {
public:
    string makeFancyString(string s) {
       string ans = "";
        if(s.size() == 1)  return s;
        ans+=s[0];
        ans+=s[1];
        for (int i=2;i< s.size();i++) {
            if (s[i] == s[i-1] && s[i]== s[i-2]) {
                continue;
            } else {
                ans+=s[i];
            }
        }
        return ans;
    }
};