class Solution {
public:
    int pivotInteger(int n) {
        if(n==1) return 1;
        int sum=(n*(n+1))/2;
        int h=sum/2;
        int i=1,ele=0,ele1=0,j=n;;
        while(ele<h and ele1<h){
            if(ele<=ele1 ){
                ele+=i;
                cout<<ele<<i<<" ";
                i++;
            }
            if(i==j and ele1==ele ) return i;
            if(ele1<=ele){
                ele1+=j;
                 cout<<ele1<<j<<" ";
                j--;
            } 
           
        }
        return -1;

    }
};