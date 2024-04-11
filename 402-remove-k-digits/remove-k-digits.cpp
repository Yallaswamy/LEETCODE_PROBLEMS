class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans="";
        ans.push_back(num[0]);
        for(int i=1;i<num.size();i++){
            while(!ans.empty() and k>0 and ans.back()>num[i]){
                ans.pop_back();
                k--;
            }
            ans.push_back(num[i]);
        }
        while(k>0 and !ans.empty()){
            ans.pop_back();
            k--;
        }
        int n=ans.size(),i=0;
        while(ans[i]=='0' and i<n){
            i++;
        }
        ans=ans.substr(i,n);
        if(ans=="") return "0";
        return ans;
    }
};