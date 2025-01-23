class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int Rows = grid.size();
        int Cols = grid[0].size();

        int k = 0; //server count

        for(int i=0; i<Rows; i++){
            for(int j=0; j<Cols; j++){
                if(grid[i][j]==1){
                    bool canComm = false;

                    //checking for communication in same row
                    for(int oj=0; oj<Cols; oj++){
                        if(oj!=j && grid[i][oj]==1){
                            canComm = true;
                            break;
                        }
                    }
                    if(canComm){
                        k++;
                    }
                
                    else{
                        //checking for communication in same col
                        for(int orw=0; orw<Rows; orw++){
                            if(orw!=i && grid[orw][j]==1){
                                canComm = true;
                                break;
                            }
                        }
                        if(canComm){
                            k++;
                        }
                    }
                }
            }
        }
        return k;
    }
};