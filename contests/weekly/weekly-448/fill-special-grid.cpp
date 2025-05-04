class Solution {
    private:
        void fillGrid(int rowStart, int rowEnd, int colStart, int colEnd, 
                      vector<vector<int>>& grid, int& counter) {
    
            if (rowStart == rowEnd && colStart == colEnd) {
                grid[rowStart][colStart] = counter++;
                return;
            }
            
            int rowMid = (rowStart + rowEnd) / 2;
            int colMid = (colStart + colEnd) / 2;
            
            fillGrid(rowStart, rowMid, colMid + 1, colEnd, grid, counter);
            
            fillGrid(rowMid + 1, rowEnd, colMid + 1, colEnd, grid, counter);
            
            fillGrid(rowMid + 1, rowEnd, colStart, colMid, grid, counter);
    
            fillGrid(rowStart, rowMid, colStart, colMid, grid, counter);
        }
        
    public:
        vector<vector<int>> specialGrid(int N) {
            int size = 1 << N;  
            
            vector<vector<int>> grid(size, vector<int>(size, 0));
            
            if (N == 0) {
                grid[0][0] = 0;
                return grid;
            }
            
            int counter = 0;
            fillGrid(0, size - 1, 0, size - 1, grid, counter);
            
            return grid;
        }
};