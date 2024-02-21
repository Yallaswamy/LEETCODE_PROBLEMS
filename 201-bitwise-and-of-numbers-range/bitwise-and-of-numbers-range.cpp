class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        // int ans=0;
        // while(left!=right){
        //     left=left>>1;
        //     right=right>>1;
        //     ans++;
        // }
        // return left<<ans;
        while(left<right){
            right=right&(right-1);
        }
        return right;
    }

};