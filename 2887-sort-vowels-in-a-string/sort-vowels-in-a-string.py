class Solution(object):
    def sortVowels(self, s):
        """
        :type s: str
        :rtype: str
        """
        a='AEIOUaeiou'
        a1=[]
        for i in s:
            if i in a:
                a1.append(i)
        a1=sorted(a1)
        j=0
        s=list(s)
        for i in range(len(s)):
            if s[i] in a:
                s[i]=a1[j]
                j+=1
        return "".join(s)