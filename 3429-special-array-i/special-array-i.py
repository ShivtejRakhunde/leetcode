class Solution:
    def isArraySpecial(self, nums: List[int]) -> bool:
        n = len(nums)
        if n==1:
            return True
        for i in range(0,n-1):
            if(nums[i]%2 == nums[i+1]%2):
                return False

        return True