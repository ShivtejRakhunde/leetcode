class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        long long minrslt = LLONG_MAX;

        long long r1sum = 0;
        for(int i=0; i<grid[0].size(); i++){
            r1sum += grid[0][i];
        }

        long long r2sum = 0;
        for(int i=0; i<grid[0].size(); i++){
            r1sum -= grid[0][i];
            minrslt = min(minrslt, max(r1sum, r2sum));
            r2sum += grid[1][i];
        }

        return minrslt;
    }
};