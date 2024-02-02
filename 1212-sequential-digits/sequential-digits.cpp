class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        int num=0;
        vector<int>v;
        for(int i=1;i<10;i++){
            num=0;
            for(int j=i;j<10;j++){
                num=num*10+j;
                v.push_back(num);
            }
        }
        vector<int>ans;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(v[i]>=low and v[i]<=high){
                ans.push_back(v[i]);
            }
        }
        return ans;
    }
};