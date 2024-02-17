class Solution {
public:
    int furthestBuilding(vector<int>& arr, int b, int l) {
        int ans=0,maxi=0;
        priority_queue<int>pq;
        for(int i=1;i<arr.size();i++){
            if(arr[i-1]>arr[i]){
                ans+=1;
                continue;
            }
            else pq.push((arr[i]-arr[i-1])*-1);
            if(pq.size()>l){
                int ele=pq.top();
                b=b-(-1*ele);
                pq.pop();
            }
            if(b<0) return ans;
            ans+=1;
        }
        return ans;
    }
};