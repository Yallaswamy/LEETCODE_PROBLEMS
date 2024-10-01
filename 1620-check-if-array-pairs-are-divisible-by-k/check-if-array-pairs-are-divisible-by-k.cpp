class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int>ans(k, 0);
        for (int num : arr) {
            int rem = num % k;
            if (rem < 0) {
                rem += k;
            }
            ans[rem]++;
        }
        
        if (ans[0] % 2 != 0) {
            return false;
        }
        
        for (int i = 1; i <= k / 2; i++) {
            if (ans[i] != ans[k - i]) {
                return false;
            }
        }
        
        return true;
    }
};