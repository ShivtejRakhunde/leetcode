class Solution {
    public long gridGame(int[][] grid) {
        long minrslt = Long.MAX_VALUE;

        long r1sum = 0;
        for(int i=0; i<grid[0].length; i++){
            r1sum += grid[0][i];
        }

        long r2sum = 0;
        for(int i=0; i<grid[0].length; i++){
            r1sum -= grid[0][i];
            minrslt = Math.min(minrslt, Math.max(r1sum, r2sum));
            r2sum += grid[1][i];
        }

        return minrslt;
    }
}