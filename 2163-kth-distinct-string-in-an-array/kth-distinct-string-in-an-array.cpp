class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int>mp;
        for(auto it:arr){
            mp[it]++;
        }
        for(int i=0;i<arr.size();i++){
            if(mp[arr[i]]==1){
                k-=1;
                if(k==0) return arr[i];
                
            }

        }
        return "";
    }
};