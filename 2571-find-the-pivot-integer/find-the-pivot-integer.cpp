class Solution {
public:
    int pivotInteger(int n) {
        if(n==1) return 1;
        int h=((n*(n+1))/2)/2;
        int i=1,ele=0,ele1=0,j=n;
        while(ele<h and ele1<h){
            if(ele<=ele1 ) ele+=i++;
            if(i==j and ele1==ele ) return  i;
            if(ele1<=ele) ele1+=j--;
        }
        return -1;
    }
};