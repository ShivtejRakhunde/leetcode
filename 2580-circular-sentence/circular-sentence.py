class Solution:
    def isCircularSentence(self, s: str) -> bool:
        n = len(s)

        if s[0]!=s[n-1]:
            return False

        for i in range(n-1):
            if s[i]==' ':
                if s[i-1]!=s[i+1]:
                    return False

        return True