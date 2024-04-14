class Solution(object):
    def findLatestTime(self, s):
        """
        :type s: str
        :rtype: str
        """
        ans=""
        if s[0]=='?' and s[1]=='?' and s[3]=='?' and s[4]=='?':
            return "11:59"
        if s[0]=='?' and s[1]!='1' and s[1]!='?' and s[1]!='0' :
            ans+='0'
            print('1')
        if s[0]=='?' and( s[1]=='1' or s[1]=='?' or s[1]=='0'):
            ans+='1'
            print('2')
        if s[1]=='?' and s[0]=='0':
            ans+='9'
            print('3')
        if s[1]=='?' and (s[0]=='?' or s[0]=='1'):
            ans+='1'
            print('4')
        if s[3]=='?':
            ans+='5'
            print('5')
        if s[4]=='?':
            ans+='9'
            print('6')
        print(ans)
        ans1=""
        j=0
        for i in range(5):
            if s[i]=='?':
                ans1+=ans[j]
                j=j+1
            else:
                ans1+=s[i]
        return ans1
        
        
            

           