class Solution {
public:
       
    bool valid (int row, int col, int n, int m) {
        return row >= 0 and row < n and col >= 0 and col < m;
    }
    
    int solve(int row, int col, vector<vector<int>> &grid, int cnt) {
        int n = grid.size();
        int m = grid[0].size();
        
        if (!valid(row, col, n, m) or grid[row][col] == -1) {
            return 0;
        }
        
        if (grid[row][col] == 2) {
            return cnt == 0;
        }
        
        int ways = 0;
        grid[row][col] = -1;
        int dx[4] = {-1, 0, 1, 0};
        int dy[4] = {0, 1, 0, -1};
        for (int i = 0; i < 4; i++) {
            int newX = row + dx[i];
            int newY = col + dy[i];
            
            ways += solve(newX, newY, grid, cnt - 1);
        }
        
        grid[row][col] = 0;
        return ways;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        int ans = 0;        
        int cnt = 0;
        int row, col;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 0) {
                    cnt++;
                }
                if (grid[i][j] == 1) {
                    row = i;
                    col = j;
                }
            }
        }
        
        return solve(row, col, grid, cnt + 1);
    }
};