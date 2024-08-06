class Solution {
public:
    int minimumPushes(string word) {
        map<char,int>mp;
        for(auto it:word){
            mp[it]++;
        }
        vector<pair<int,char>>v;
        for(auto it:mp){
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end());
        int key=1,sum=0,c=0;
        for(int i=v.size()-1;i>=0;i--){
            c+=1;
            sum+=(key*v[i].first);
            if(c>=8){
                key+=1;
                c=0;
            }
        }
        for(auto it:v){
            cout<<it.first<<it.second;
        }
        return sum;
    }
};