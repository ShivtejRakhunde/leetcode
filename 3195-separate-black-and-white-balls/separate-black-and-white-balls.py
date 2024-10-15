class Solution:
    def minimumSteps(self, s: str) -> int:
        k = 0
        b = 0
        for i in range(len(s)):
            if s[i]=='0':
                k+=b
            else:
                b+=1
        return k