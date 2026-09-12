class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        result=0
        for x in range(len(nums)):
           result^=nums[x]
        return result