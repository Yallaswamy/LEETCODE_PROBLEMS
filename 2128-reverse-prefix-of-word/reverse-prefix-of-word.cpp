class Solution {
public:
    string reversePrefix(string word, char ch) {
        int ind=0;
        for(int i=0;i<word.size();i++){
            if(word[i]==ch){
                ind=i;
                break;
            }
        }
        string s="";
        if(ind==word.size()) return word;
        else{
            for(int i=ind;i>=0;i--){
                s+=word[i];
            }
            for(int i=ind+1;i<word.size();i++){
                s+=word[i];
            }
           
        }
        return s;
    }
};