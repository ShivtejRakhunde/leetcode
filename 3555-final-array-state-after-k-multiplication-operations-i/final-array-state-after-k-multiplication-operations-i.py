class Solution:
    def getFinalState(self, nums: List[int], k: int, multiplier: int) -> List[int]:
        n = len(nums)

        for i in range(k):
            minI = 0
            for j in range(n):
                if(nums[j]<nums[minI]):
                    minI = j
            
            nums[minI] *= multiplier

        return nums