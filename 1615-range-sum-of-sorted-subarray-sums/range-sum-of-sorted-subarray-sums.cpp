class Solution {
public:
    int M=1e9+7;
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>arr;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum=(sum+nums[j])%M;
                arr.push_back(sum);
            }
        }
        int sum=0;
        sort(begin(arr),end(arr));
        for(int i=left-1;i<right;i++)
            sum=(sum+arr[i])%M;
        return sum;
    }
};