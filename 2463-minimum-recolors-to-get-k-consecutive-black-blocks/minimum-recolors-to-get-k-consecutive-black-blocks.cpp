class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int minR = INT_MAX;

        for(int i=0; i<blocks.size()-k+1; i++){
            int c = 0;
            for(int j=i; j<i+k; j++){
                if(blocks[j]=='W'){
                    c++;
                }
            }
            minR = min(minR, c);

        }
        return minR;
    }
};