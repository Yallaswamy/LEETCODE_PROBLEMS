class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        rev=0
        k=0
        s=x
        if(x<0):
            x=x*-1
        n=x
        while(n!=0):
            k=n%10
            rev=rev*10+k
            n=n//10
        if rev<2**(-31) or rev>2**31:
            return 0

        elif(s<0):
            return -(rev)
        else:
            return rev
        