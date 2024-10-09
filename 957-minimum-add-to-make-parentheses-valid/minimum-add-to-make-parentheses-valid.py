class Solution:
    def minAddToMakeValid(self, s: str) -> int:
        k1=0
        k2=0
        for c in range(len(s)): 
            if s[c]=='(':
                k1+=1
            else:
                if k1>0:
                    k1-=1
                else:
                    k2+=1
                   
        return k1+k2;