class Solution {
public:
    int findComplement(int num) {
        unsigned int c=1<<(int)(log2(num));


 
        
        unsigned int mask=(c*2)-1;
      //  cout<<mask<<" "<<n<<" ";
        return mask^num;
    }
};