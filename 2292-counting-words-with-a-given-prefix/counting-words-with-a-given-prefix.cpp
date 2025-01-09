class Solution {
public:
    int prefix(string a,string b){
        for(int i=0;i<b.size();i++){
            if(a[i]!=b[i]){
                return 0;
            }
        }
        return 1;
    }
    int prefixCount(vector<string>& words, string pref) {
        int c=0;
        for(int i=0;i<words.size();i++){
            if(prefix(words[i],pref)){
                c+=1;
            }
        }
        return c;
    }
};