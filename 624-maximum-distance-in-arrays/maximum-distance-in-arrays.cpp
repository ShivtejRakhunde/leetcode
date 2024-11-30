class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int l = arrays[0][0];
        int h = arrays[0].back();
        int md = 0;

        for(int i = 1; i < arrays.size(); i++){
            md = max(md, abs(arrays[i].back()-l));
            md = max(md, abs(h-arrays[i][0]));
            l = min(l, arrays[i][0]);
            h = max(h, arrays[i].back());
        }
        return md;
    }
};