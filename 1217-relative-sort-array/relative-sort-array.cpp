class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>mp;
        for(auto it:arr1){
            mp[it]++;
        }
        vector<int>v;
        for(auto it:arr2){
            for(int i=0;i<mp[it];i++){
                v.push_back(it);
            }
        }
        map<int,int>mp2;
        for(auto it:arr2){
            mp2[it]++;
        }
        vector<int>v1;
        for(auto it:arr1){
            if(mp2.find(it)==mp2.end()){
                v1.push_back(it);
            }
        }
        sort(v1.begin(),v1.end());
        for(int i=0;i<v1.size();i++){
            cout<<v1[i]<<" ";
            v.push_back(v1[i]);
        }
        return v;
    }
};