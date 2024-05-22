class Solution {
public:
     bool pal(string &s){
        if (s.size()==1) return 1;
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]) return false;
            i++,j--;
        }
        return true;
    }
    void slove(int ind,int &n,const string& s,vector<string>& ds,vector<vector<string>>& v){
        if(ind==n){
            v.push_back(ds);
            return ;
        }
        else{
            for(int i=ind;i<n;i++){
                string sub=s.substr(ind,i-ind+1);
                if(pal(sub)){
                    ds.push_back(sub);
                    slove(i+1,n,s,ds,v);
                    ds.pop_back();
                }
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>v;
        vector<string>ds;
        int n=s.size();
        slove(0,n,s,ds,v);
        return v;
    }
};