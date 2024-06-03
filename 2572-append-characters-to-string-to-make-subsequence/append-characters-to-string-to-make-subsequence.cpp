class Solution {
public:
    int appendCharacters(string s, string t) {
       int n=s.size(),l=t.size(),i=0,j=0;
        while(i<n && j<l){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
        return l-j;
    }
};