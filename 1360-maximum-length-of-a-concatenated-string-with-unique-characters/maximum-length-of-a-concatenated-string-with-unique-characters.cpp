class Solution {
public:
   int find(string s){
       map<char,int>mp;
       for(int i=0;i<s.size();i++){
           mp[s[i]]++;
       }
       return mp.size()==s.size();
   }

   void solve(int ind,vector<string>&arr,string s,int &maxi){
        
        if(ind==arr.size()){
            return ;
        }
        if(find(s+arr[ind])){
            maxi=max(maxi,(int)(s+arr[ind]).size());
            solve(ind+1,arr,s+arr[ind],maxi);
        }
        solve(ind+1,arr,s,maxi);
       
    }
    int maxLength(vector<string>& arr) {
        int ind=0;
        int maxi=0;
        string s="";
        solve(0,arr,s,maxi);
        return maxi;
    }
};