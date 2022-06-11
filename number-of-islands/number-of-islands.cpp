class Solution {
public:
     void dfs(vector<vector<char>>& grid, int x, int y){
            grid[x][y] = '0';
            int H = grid.size();
            int W = grid[0].size();
            
            if(x-1 >= 0 && grid[x-1][y] == '1')
                dfs(grid, x-1, y);
            
            if(x+1 < H && grid[x+1][y] == '1')
                dfs(grid, x+1, y);
            
            if(y-1 >= 0 && grid[x][y-1] == '1')
                dfs(grid, x, y-1);
            
            if(y+1 < W && grid[x][y+1] == '1')
                dfs(grid, x, y+1);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        int H = grid.size(); // Height or no. of rows in the grid
        int W = grid[0].size(); // Width or no. of columns in the grid
        
        if(!H || !W) // return zero if the number of rows and columns is zero
            return 0;
        
        for(int i = 0 ; i < H ; i++){
            for(int j = 0 ; j < W ; j++){
                if(grid[i][j] == '1'){
                    count++;
                    dfs(grid, i, j);
                }
            }
        }
        return count;
    }
};