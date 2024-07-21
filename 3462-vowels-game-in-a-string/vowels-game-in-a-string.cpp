class Solution {
public:
    bool doesAliceWin(string s) {
        int c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                c+=1;
            }
        }
        if(c==0) return 0;
        if(c%2==0 and s.size()==c) return 1;
        if(c%2==0 and s.size()>c) return 1;
        if(c%2!=0) return 1;
        else return 0; 
    }
};