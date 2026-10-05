class Solution:
    def missingNumber(self, nums: List[int]) -> int:
      n=len(nums)
      i=n*(n+1)//2
      return i-sum(nums)