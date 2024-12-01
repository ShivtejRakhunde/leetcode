class Solution:
    def checkIfExist(self, arr: List[int]) -> bool:
        for i in range(len(arr)):
            j = 0
            while j<len(arr):
                if arr[i]==2*arr[j] and i!=j:
                    return True
                j+=1

        return False