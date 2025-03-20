class Solution {
public:
    bool isFeasible(vector<int>& candies, long long k, int mid){
        long long count = 0;
        for(int num: candies){
            count += num/mid;
        }
        if(count>=k) return true;
        return false;
    }


    int maximumCandies(vector<int>& candies, long long k) {
        int ans = 0;
        sort(candies.begin(), candies.end());
        int n = candies.size();
        int h = candies[n-1], l = 1;

        //using binary search
        while(l<=h){
            int mid = l + (h-l) / 2;

            if(isFeasible(candies, k, mid)){
                ans = mid;
                l = mid + 1;
            }
            else{
                h = mid - 1;
            }
        }

        return ans;
    }
};