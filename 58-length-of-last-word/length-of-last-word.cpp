class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]!=' '){
                c+=1;
            }
            else if(c>0 and s[i]==' '){
                break;
            }
        }
        return c;
    }
};