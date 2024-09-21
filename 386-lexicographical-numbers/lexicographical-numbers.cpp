class Solution {
public:
    static bool cmp(int a,int b){
        string a1=to_string(a);
        string b1=to_string(b);
        return a1<b1;
    }
    vector<int> lexicalOrder(int n) {
        vector<int>v;
        for(int i=1;i<=n;i++){
            v.push_back(i);
        }
        sort(v.begin(),v.end(),cmp);
        return v;
    }
};