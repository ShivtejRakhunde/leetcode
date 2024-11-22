class Solution {
public:
    bool isMagicSquare(vector<vector<int>>& grid, int row, int col) {
    unordered_set<int> nums;
    int sum = grid[row][col] + grid[row][col+1] + grid[row][col+2];

    // Check sums of the rows
    for (int i = row; i < row + 3; i++) {
        int rowSum = 0;
        for (int j = col; j < col + 3; j++) {
            rowSum += grid[i][j];
            nums.insert(grid[i][j]);
        }
        if (rowSum != sum) return false;
    }

    // Check sums of the columns
    for (int j = col; j < col + 3; j++) {
        int colSum = 0;
        for (int i = row; i < row + 3; i++) {
            colSum += grid[i][j];
        }
        if (colSum != sum) return false;
    }

    // Check sums of the diagonals
    int diagonalSum1 = grid[row][col] + grid[row+1][col+1] + grid[row+2][col+2];
    int diagonalSum2 = grid[row][col+2] + grid[row+1][col+1] + grid[row+2][col];
    if (diagonalSum1 != sum || diagonalSum2 != sum) return false;

    // Ensure all numbers are distinct and in the range [1, 9]
    if (nums.size() != 9) return false;
    for (int n = 1; n <= 9; n++) {
        if (nums.find(n) == nums.end()) return false;
    }

    return true;
}

int numMagicSquaresInside(vector<vector<int>>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();
    int count = 0;

    for (int i = 0; i <= rows - 3; i++) {
        for (int j = 0; j <= cols - 3; j++) {
            if (grid[i+1][j+1] != 5) continue;  // Optimization: the center of a magic square must be 5
            if (isMagicSquare(grid, i, j)) {
                count++;
            }
        }
    }

    return count;
}

};