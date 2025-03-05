class Solution {
public:
    long long coloredCells(int n) {
        long long x = 1; //coloured cell count
        int y = 4;

        for(int i=1; i<n; i++){
            x += y;
            y += 4;
        }

        return x;
    }
};