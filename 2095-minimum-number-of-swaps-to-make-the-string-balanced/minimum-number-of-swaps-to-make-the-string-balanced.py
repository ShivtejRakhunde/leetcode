class Solution:
    def minSwaps(self, s: str) -> int:
        stack=[]
        unb = 0
        for c in s:
            if c=='[':
                stack.append(c)
            else:
                if stack:
                    stack.pop()
                else:
                    unb+=1

        return (unb+1)//2