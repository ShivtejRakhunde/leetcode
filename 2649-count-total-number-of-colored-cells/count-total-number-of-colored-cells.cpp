class Solution {
public:
    long long coloredCells(int n) {
        long long x ; //coloured cell count
        
        x = 1 + (long long) n*(n-1)*2;

        return x;
    }
};