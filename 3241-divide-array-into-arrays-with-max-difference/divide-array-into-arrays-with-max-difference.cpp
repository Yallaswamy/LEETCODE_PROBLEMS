class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        int j=0;
        for(int i=0;i<nums.size();i+=3){
            vector<int>v1;
            v1.push_back(nums[i]);
            for( j=i+1;j<i+2;j++){
                if(abs(nums[j-1]-nums[j+1])>k ){
                    return {};
                }
                else{
                    v1.push_back(nums[j]);
                }
            }
              v1.push_back(nums[j]);
            v.push_back(v1);
        }
        return v;
    }
};