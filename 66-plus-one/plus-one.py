class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        nums=""
        for i in range(len(digits)):
            nums+=str(digits[i])
        nums=int(nums);
        nums+=1;
        nums=str(nums)
        ans=[]
        for i in nums:
            ans.append(int(i))
        return ans
