class Solution {
public:
    int minChanges(int n, int k) {
        if(n==k) return 0;
        int c=0;
        int maxi=max(n,k);
        int len=log2(maxi)+1;
        for(int i=0;i<len;i++){
            if(n&(1<<i)){
                cout<<"hi"<<" ";
                if((k&(1<<i))){
                    continue;
                }
                else{
                    c+=1;
                }
            }
            else{
                if(k&(1<<i)){
                    return -1;
                }
                else{
                    continue;
                }
            }
        }
        return c;
    }
};