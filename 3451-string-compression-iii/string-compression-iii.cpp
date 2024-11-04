class Solution {
public:
    string compressedString(string word) {
        int c=1;
        string ans="";
        int i;
        for( i=1;i<word.size();i++){
            if(word[i-1]==word[i] and c<9){
                c+=1;
            }
            else{
                ans+=to_string(c);
                ans+=word[i-1];
                c=1;
            }
        }
        ans+=to_string(c);
        ans+=word[i-1];
        return ans;
    }
};