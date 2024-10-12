class Solution:
    def isValid(self, s: str) -> bool:
        mp = {'(': ')', '{': '}', '[': ']'}
    
        stack = []
        
        for char in s:
            # If it's an opening bracket, push it to the stack
            if char in mp:
                stack.append(char)
            # If it's a closing bracket, check for matching opening bracket
            elif stack and mp[stack[-1]] == char:
                stack.pop()
            # If no match, return false
            else:
                return False
        
        # Return true if stack is empty
        return not stack