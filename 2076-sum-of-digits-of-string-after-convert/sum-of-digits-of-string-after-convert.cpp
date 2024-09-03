class Solution {
public:
    int getLucky(string s, int k) {
        string sum="";
       for(int i=0;i<s.size();i++){
            sum+=to_string(s[i]-96);
        }
        cout<<sum;
        int num=0;
        while(k--){
            num=0;
            for(auto it:sum){
                num+=(it-'0');
            }
            sum=to_string(num);
        }
        return num;
    }
};