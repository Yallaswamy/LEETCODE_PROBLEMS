class Solution {
public:
    bool ispal(string n){
        for(int i=0;i<n.size();i++){
            if(n[i]!=n[n.size()-1-i]){
                return 0;
            }
        }
        return 1;
    }
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            if(ispal(words[i])){
                return words[i];
            }
        }
        return "";
    }
};