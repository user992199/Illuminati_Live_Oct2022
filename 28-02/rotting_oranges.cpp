class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int r = grid.size(), c = grid[0].size();
        int ffs = 0;
        queue<pair<int, int> > q;
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                if(grid[i][j] == 1){
                    ffs++;
                }else if(grid[i][j] == 2){
                    q.push(make_pair(i, j));
                }
            }
        }
        int time = 1;
        if(!ffs) return 0;
        int x_diff[] = {0, 0, -1, 1};
        int y_diff[] = {-1, 1, 0, 0};
        while(!q.empty()){
            int s = q.size();
            while(s--){
                auto curr = q.front();
                q.pop();
                for(int d = 0; d < 4; d++){
                    int nx = curr.first + x_diff[d];
                    int ny = curr.second + y_diff[d];
                    if(nx >= 0 && nx < r && ny >= 0 && ny < c && grid[nx][ny] == 1){
                        ffs--;
                        q.push(make_pair(nx, ny));
                        grid[nx][ny] = 2;
                    }
                }
            }
            if(ffs == 0){
                return time;
            }
            time++;
        }
        return -1;
    }
};