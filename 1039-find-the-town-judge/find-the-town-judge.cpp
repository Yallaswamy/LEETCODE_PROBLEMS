class Solution {
public:
    int findJudge(int n, vector<vector<int>>&v){
      if(n==1) return 1;
       map<int,int>mp;
       vector<int>v1;
       int m=v.size();
        for(int i=0;i<m;i++){
           mp[v[i][1]]++;
           v1.push_back(v[i][0]);
        }
        int ele=0,f=0;
        for(auto it:mp) 
        {
        if(find(v1.begin(),v1.end(),it.first)==v1.end() and it.second==n-1)
        {
             ele=it.first;  
             f=1;
        }
        }
        if(f==1) return ele;
        return -1;
       
    }
};