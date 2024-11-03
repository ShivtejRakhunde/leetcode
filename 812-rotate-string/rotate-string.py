class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        if len(s) != len(goal):
            return False
        # Concatenate s with itself and check if goal is a substring
        doubled = s + s
        return goal in doubled