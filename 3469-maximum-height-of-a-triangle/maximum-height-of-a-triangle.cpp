class Solution {
int slove(int first,int second)
    {
        int evenodd=1;
        int sum= 0;
        while(first>=0 && second>=0)
        {
            if(evenodd%2==1)
            {
                first=first-evenodd;
            }
            else
            {
                second=second-evenodd;
            }
            if(first<0||second<0)
            {
                return sum;
            }
            sum++;
            evenodd++;
        }
        return sum;
    }
public:
    int maxHeightOfTriangle(int red, int blue) {
        int maxi = max(slove(red,blue), slove(blue,red));
        return maxi;
    }
};