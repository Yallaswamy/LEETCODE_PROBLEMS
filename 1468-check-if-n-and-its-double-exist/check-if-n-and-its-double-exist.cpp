class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        map<int,int>mp;
        int j=0; 
        for(int i=0;i<arr.size();i++){
            if(mp[2*arr[i]]){
                return 1;
            }
            else if(arr[i]%2==0 and mp[arr[i]/2]){
                return 1;
            }
            mp[arr[i]]++;
        }
        return 0;
    }
};