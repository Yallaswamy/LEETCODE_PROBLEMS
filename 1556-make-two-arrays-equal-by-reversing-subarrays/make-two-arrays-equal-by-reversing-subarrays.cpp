class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        if (target.size()!=arr.size()) return 0;
        map<int,int>mp;
        for(int i=0;i<target.size();i++){
            mp[target[i]]++;
        }
        for(int i=0;i<arr.size();i++){
            if(mp[arr[i]]){
                mp[arr[i]]--;
            }
            else{
                return 0;
            }
        }
        return 1;
    }
};