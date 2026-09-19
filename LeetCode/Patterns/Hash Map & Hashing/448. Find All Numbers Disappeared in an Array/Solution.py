class Solution:
    def findDisappearedNumbers(self, nums: list[int]) -> list[int]:
        a=set(nums)
        n=len(nums)
        b=[]
        for i in range(1,n+1):
            if i not in a:
                b.append(i)  
        return b          

        