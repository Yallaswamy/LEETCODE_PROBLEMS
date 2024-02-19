class Solution {
public:
    bool isPowerOfTwo(int n) {
         if(n<0)
        {
            return 0;
        }
        int k=__builtin_popcount(n);
        if(k==1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};