class Solution {
public:
    int minBitFlips(int start, int goal) {
        int k=start^goal;
        int c=0;
        while(k!=0){
            if(k&1){
                c+=1;
            }
            k=k>>1;
        }
        return c;
    }
};