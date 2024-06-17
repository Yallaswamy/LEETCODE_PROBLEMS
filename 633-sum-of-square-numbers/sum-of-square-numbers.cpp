class Solution {
public:
    bool judgeSquareSum(int c) {
        long long l=0,h=sqrt(c);
        while(l<=h){
            long long  sum=(long long )l*l+(long long )h*h;
            if(c==sum){
                return 1;
            }
            else if(sum>c){
                h--;
            }
            else{
                l++;
            }
        }
        return 0;
    }
};