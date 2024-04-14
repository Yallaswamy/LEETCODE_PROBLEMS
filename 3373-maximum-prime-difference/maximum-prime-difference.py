class Solution(object):
    def isprime(n):
        if n>1:
            for i in range(2,int(n**(0.5))+1):
                if n%i==0:
                    return 0
            return 1
    def maximumPrimeDifference(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        def isprime(n):
            if n>1:
                for i in range(2,int(n**(0.5))+1):
                    if n%i==0:
                        return 0
                return 1
        ind=0
        ind1=0
        for i in range(len(nums)):
            if isprime(nums[i]):
                ind=i
                break
        for i in range(len(nums)-1,0,-1):
            if isprime(nums[i]):
                ind1=i
                break
        return abs(ind-ind1)

    
        