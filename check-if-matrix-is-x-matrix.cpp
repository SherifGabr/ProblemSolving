class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        
        
        for(int r = 0; r < rows; r++)
        {
            for(int c = 0; c < cols; c++)
            {
                if(((c == r || (r + c == rows-1)) && grid[r][c] == 0)){
                    return false;
                }
                else if((c != r && (r+c != rows -1)) && grid[r][c] != 0)
                {
                    return false;
                }
            }   
        }
        return true;
    }
};
