class Solution:
    def findLucky(self, arr: list[int]) -> int:
        frequency = {}
        
        for item in arr:
            frequency[item] = frequency.get(item, 0) + 1
            
        max_lucky = -1
        
       
        for key, count in frequency.items():
            if key == count:
                max_lucky = max(max_lucky, key)
                
        return max_lucky