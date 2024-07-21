class Solution {
public:
    int maxOperations(string s) {
        int one=0;
        vector<int>v;
        int f=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                one+=1;
                f=1;
            }
            else if(f==1 and s[i]=='0'){
                v.push_back(one);
                f=0;
            }
               
        }
        int ans=0;
        for(int i=0;i<v.size();i++){
            ans+=v[i];
        }
        return ans;
    }
};