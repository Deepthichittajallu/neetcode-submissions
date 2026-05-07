class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,int>>q;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j] == 0)
                {
                    q.push({i,j});
                }
            }
        }
        vector<int>dr = {0,0,-1,1};
        vector<int>dc = {-1,1,0,0};
        while(!q.empty())
        {
            auto top = q.front();
            q.pop();
            for(int i=0;i<4;i++)
            {
                int row = top.first + dr[i];
                int col = top.second + dc[i];
                if(row < 0 || row >= n || col < 0 || col >= m)
                {
                    continue;
                }
                if(grid[row][col] != INT_MAX)
                    {
                        continue;
                    }
                grid[row][col] = grid[top.first][top.second] + 1;
                q.push({row,col});

            }
        }
        // return grid;
    }
};
