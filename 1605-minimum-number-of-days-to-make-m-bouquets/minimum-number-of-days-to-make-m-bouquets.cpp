class Solution {
public:
    int fun(vector<int>&b,int n,int k,int mid){
      long long c=0;
      long long ans=0;
      for(int i=0;i<n;i++){
          if(b[i]<=mid){
              c+=1;
              if(c==k){
                  ans+=1;
                  c=0;
              }
          }
          else{
              c=0;
          }
      }
      return ans;
    }
    int minDays(vector<int>& arr, int m, int k) {
       long long n=arr.size();
        if((1LL*m)*(1LL*k) > 1LL*n) return -1;

      long long mini=*min_element(arr.begin(), arr.end()); 
      long long maxi=*max_element(arr.begin(), arr.end()); 
      while(mini<=maxi){
          long long mid=(mini+maxi)/2;
          if(fun(arr,n,k,mid)>=m){
              maxi=mid-1;
          }
          else{
              mini=mid+1;
          }
      }
      return mini;
    

    }
};