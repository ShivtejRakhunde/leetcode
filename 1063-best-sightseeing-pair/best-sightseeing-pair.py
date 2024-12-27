class Solution:
    def maxScoreSightseeingPair(self, values: List[int]) -> int:
        LeftMax = values[0]
        ans = 0

        for i in range (1,len(values)):
            ans = max(ans, LeftMax+values[i]-i)

            LeftMax = max(LeftMax, values[i]+i)

        return ans