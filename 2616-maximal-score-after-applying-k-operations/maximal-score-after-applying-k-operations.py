class Solution:
    def maxKelements(self, nums: List[int], k: int) -> int:
        score = 0
        max_heap = []
        
        for num in nums:
            heapq.heappush(max_heap, -num)

        while k > 0:
            k -= 1
            # Retrieve the max element (invert the sign because it's stored as negative)
            max_element = -heapq.heappop(max_heap)
            score += max_element
            heapq.heappush(max_heap, -math.ceil(max_element / 3))

        return score