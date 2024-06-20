class Solution {
public:
    int fun(vector<int>& position,int mid){
        int c=0,last=position[0];
        for(int i=1;i<position.size();i++){
            if((position[i]-last)>=mid){
                c+=1;
                last=position[i];
            }
        }
        return c+1;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int low=1,high=position[position.size()-1];
        while(low<=high){
            int mid=(low+high)/2;
            if(fun(position,mid)>=m){
                low=mid+1;
            }
            else high=mid-1;
        }
        return high;
    }
};