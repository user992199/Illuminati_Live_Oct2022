class Solution {
public:
    void dfs(vector<vector<char>>& grid, int i, int j, int r, int c){
        // base case
        if(i < 0 or i >= r or j < 0 or j >= c or grid[i][j] != '1'){
            return;
        }
        // recursive case
        grid[i][j] = '0';
        dfs(grid, i-1, j, r, c);
        dfs(grid, i, j-1, r, c);
        dfs(grid, i+1, j, r, c);
        dfs(grid, i, j+1, r, c);
    }
    int numIslands(vector<vector<char>>& grid) {
        int count = 0, r = grid.size(), c = grid[0].size();
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                if(grid[i][j] == '1'){
                    dfs(grid, i, j, r, c);
                    count++;
                }
            }
        }
        return count;
    }
};