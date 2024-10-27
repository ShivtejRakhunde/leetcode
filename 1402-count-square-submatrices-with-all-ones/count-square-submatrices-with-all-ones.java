class Solution {
    public int countSquares(int[][] matrix) {
        int r = matrix.length;
        int c = matrix[0].length;
        int k = 0;

        int[][] dp = new int[r+1][c+1];

        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(matrix[i][j]==1){
                    dp[i+1][j+1] = Math.min(Math.min(dp[i][j+1], dp[i+1][j]), dp[i][j]) + 1;
                    k = k + dp[i+1][j+1];
                }
            }
        }
        return k;
    }
}