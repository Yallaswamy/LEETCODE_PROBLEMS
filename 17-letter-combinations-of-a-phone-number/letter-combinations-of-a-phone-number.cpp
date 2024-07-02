class Solution {
public:
    vector<string>key{"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
   
    void slove(int ind2,string &str,string &digits,vector<string>&ans){
        if(ind2==digits.size()) {
            ans.push_back(str);
            return ;
        }
        for(int i=0;i<key[digits[ind2]-'0'].size();i++){
            str+=key[digits[ind2]-'0'][i];
            slove(ind2+1,str,digits,ans);
            str.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        string s;
        slove(0,s,digits,ans);
        if(digits=="") return {};
        return ans;
    }
};