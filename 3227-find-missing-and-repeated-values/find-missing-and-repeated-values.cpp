class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        unordered_map<int, int> mp;
        int n = grid.size();

        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                if(mp.find(grid[i][j])!=mp.end()){
                    ans.push_back(grid[i][j]);
                }
                else{
                    mp[grid[i][j]]++;
                }
            }
        }

        for(int x=1; x<=n*n; x++){
            if(mp.find(x)!=mp.end()){
                continue;
            }
            ans.push_back(x);
        }

        return ans;
    }
};