class Solution:
    def waysToSplitArray(self, nums: List[int]) -> int:
        splits = 0
        rsum = 0
        lsum = 0
        
        for i in range(len(nums)):
            rsum = rsum + nums[i]

        for i in range(len(nums)-1):
            lsum = lsum + nums[i]
            rsum = rsum - nums[i]

            if(lsum>=rsum):
                splits += 1

        return splits