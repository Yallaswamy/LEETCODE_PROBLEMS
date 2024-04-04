class Solution {
public:
    int maxDepth(string s) {
        int maxi=0,c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                c++;
            }
            else if (s[i]==')'){
                c--;
            }
            maxi=max(maxi,c);
        }
        return maxi;
    }
};