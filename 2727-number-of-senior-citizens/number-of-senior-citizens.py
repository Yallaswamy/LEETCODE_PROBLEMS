class Solution(object):
    def countSeniors(self, details):
        """
        :type details: List[str]
        :rtype: int
        """
        c=0
        for i in range(0,len(details)):
            m=details[i][11:13]
            print(m)
            if(int(m)>60):
                c+=1
        return c
        