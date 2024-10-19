class Solution:
    def invert(self, s: str) -> str:
        return ''.join('1' if c == '0' else '0' for c in s)

    def reverse(self, s: str) -> str:
        return s[::-1]


    def findKthBit(self, n: int, k: int) -> str:
        s = "0"
        
        for i in range(1, n):
            inverted = self.invert(s)
            reversed_inverted = self.reverse(inverted)
            s = s + "1" + reversed_inverted

        return s[k - 1]