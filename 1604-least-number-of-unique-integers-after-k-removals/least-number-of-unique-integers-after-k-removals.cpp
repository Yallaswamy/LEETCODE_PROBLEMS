class Solution {
public:
    static bool cmp( pair<int,int>&a,pair<int,int>&b){
    if(a.first!=b.first){
        return a.second<b.second;
    }
    return a.second>b.second;
}
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int>mp;
        int f=0,c=0;
        for(auto it:arr){
            mp[it]++;
        }
        int ans=0;
        vector<pair<int,int>>v(mp.begin(),mp.end());
        sort(v.begin(),v.end(),cmp);
        for(auto &it:v){
            if(it.second<=k){
                cout<<it.first<<" ";
               
                k=k-it.second;
                it.second=0;
            }
            else{
                break;
            }
        }
        for(auto it:v){
            if(it.second>0){
                cout<<it.first<<" ";
                c+=1;
            }
        }
        return c;
    }
};