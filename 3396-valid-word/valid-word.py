class Solution(object):
    def isValid(self, word):
        """
        :type word: str
        :rtype: bool
        """

        a='bcdfghjklmnpqrstvwxyz'
        b='BCDFGHJKLMNPQRSTVWXYZ'
        a1='aeiou'
        b1='AEIOU'
        n='1234567890'
        if len(word)<3:
            return False
        else:
            c=c1=c2=0
            for i in range(len(word)):
                if word[i] in a or word[i] in b:
                    c=1
                elif word[i] in a1 or word[i] in b1:
                    c1=1
                elif word[i] in n:
                    c2=1
                else:
                    return False
            if (c==1 and c1==1):
                return True
            else:
                return False

        