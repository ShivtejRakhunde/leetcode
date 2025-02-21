class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long, vector<long>, greater<long>> minheap(nums.begin(), nums.end());

        int kop = 0;

        while(minheap.top() < k){
            long x = minheap.top();
            minheap.pop();
            long y = minheap.top();
            minheap.pop();

            minheap.push(x * 2 + y);

            kop++;
        }

        return kop;
    }
};