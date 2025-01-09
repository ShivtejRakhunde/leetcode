class Solution(object):
    def prefixCount(self, words, pref):
        ans = 0
        for s in words:
            if s.startswith(pref):
                ans += 1
        return ans