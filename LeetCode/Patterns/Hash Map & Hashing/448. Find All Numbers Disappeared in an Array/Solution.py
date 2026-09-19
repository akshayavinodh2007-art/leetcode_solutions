class Solution:
    def findDisappearedNumbers(self, nums: list[int]) -> list[int]:
        a=list(dict.fromkeys(nums))
        a.sort()
        n=len(nums)
        b=[]
        for i in range(1,n+1):
            if i in a:
                continue
            else:
                b.append(i)  
        return b          

        