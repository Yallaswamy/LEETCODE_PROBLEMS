class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int c=0,sum=0;
        for(int i=0;i<arr.size();i++){
            sum=0;
            for(int j=i;j<arr.size();j++){
                sum=sum^arr[j];
                if(sum==0){
                    c+=j-i;
                }
            }
        }
        return c;
    }
};