class Solution {
public:
    vector<string> key={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void solve(int ind,string &digits,int n,vector<string>&ans,string &s){
        if(ind==n){
            ans.push_back(s);
            return ;
        }
        
        int len=digits[ind]-'0';
        for(int i=0;i<key[len].size();i++){
            s+=key[len][i];
            solve(ind+1,digits,n,ans,s);
            s.pop_back();
        }

    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        int ind=0;
        int n=digits.size();
        string s="";
        solve(ind,digits,n,ans,s);
        if(digits=="") return {};
        return ans;
    }
};