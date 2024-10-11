class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        maxWealth = 0;
        l1 = len(accounts)
        l2 = len(accounts[0])
        for i in range(l1):
            sum = 0
            for j in range(l2):
                sum += accounts[i][j]

            maxWealth = max(sum,maxWealth)
        return maxWealth