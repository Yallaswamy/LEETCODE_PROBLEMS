class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>v;
        if(n==1){
            return {0};
        }
        else if(n==2){
            return {-1,1};
        }
        for(int i=0;i<n-1;i++){
            v.push_back(i);
        }
        int sum=((n-2)*(n-1))/2;
        v.push_back(-sum);
        return v;
    }
};