class Solution {
    public int findMax(int[][] grid, int a, int b){
        int maxe = 0;
        for(int i=a; i<a+3; i++){
            for(int j=b; j<b+3; j++){
                maxe = Math.max(maxe, grid[i][j]);
            }
        }
        return maxe;
    }

    public int[][] largestLocal(int[][] grid) {
        int n = grid.length;
        int [][] ans = new int [n-2][n-2];

        for(int i=0; i<n-2; i++){
            for(int j=0; j<n-2; j++){
                ans[i][j] = findMax(grid, i, j);
            }
        }

        return ans;
    }
}