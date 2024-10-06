class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x<0:
            return False
        else:
            num = x
            sum = 0
            while x!=0:
                dgt = x%10
                sum = 10*sum + dgt
                x = x//10
        
        if sum==num:
            return True
        else:
            return False