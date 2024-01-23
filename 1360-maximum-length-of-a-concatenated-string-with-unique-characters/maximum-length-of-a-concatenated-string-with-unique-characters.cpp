class Solution {
public:
   int find(string s){
       unordered_map<char,int>mp;
       for(int i=0;i<s.size();i++){
           mp[s[i]]++;
       }
       return mp.size()==s.size();
   }

   void solve(int ind,vector<string>&arr,string s,int &ans){
        
        if(ind==arr.size()){
            return ;
        }
        if(find(s+arr[ind])){
            ans=max(ans,(int)(s+arr[ind]).size());
            solve(ind+1,arr,s+arr[ind],ans);
        }
        solve(ind+1,arr,s,ans);
       
    }
    int maxLength(vector<string>& arr) {
        int ind=0;
        int ans=0;
        solve(0,arr,"",ans);
        return ans;
    }
};