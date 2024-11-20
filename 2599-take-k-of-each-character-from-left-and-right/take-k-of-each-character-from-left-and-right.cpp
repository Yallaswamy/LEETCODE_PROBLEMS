class Solution {
public:
    int takeCharacters(string s, int k) {
        int n=s.size();
        int l=0,r=0;
        int ans=n; 
        int a=0,b=0,c=0;
        int tA=0,tB=0,tC=0;
        for (char ch:s) {
            if (ch=='a') tA++;
            else if (ch=='b') tB++;
            else if (ch=='c') tC++;
        }
        if (tA<k || tB<k || tC<k){
            return -1;
        }
        while (r<n) {
            if (s[r]=='a') a++;
            if (s[r]=='b') b++;
            if (s[r]=='c') c++;
            r++;
            while (a>tA-k || b>tB- k || c>tC-k) {
                if (s[l] == 'a') a--;
                if (s[l] == 'b') b--;
                if (s[l] == 'c') c--;
                l++;
            }
            ans=min(ans, n-(r-l));
        }
        return ans;
    }
};