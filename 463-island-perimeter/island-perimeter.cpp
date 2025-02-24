class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int islands = 0, neighbours = 0;

        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                if(grid[i][j]==1){
                    islands++;
                    if(j<grid[i].size()-1 && grid[i][j+1]==1){
                        neighbours++;
                    }
                    if(i<grid.size()-1 && grid[i+1][j]==1){
                        neighbours++;
                    }
                }
            }
        }
        return 4*islands - 2*neighbours;
    }
};