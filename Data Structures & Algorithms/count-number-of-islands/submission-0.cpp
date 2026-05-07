class Solution {
public:
vector<int>dr = {-1,1,0,0};
vector<int>dc = {0,0,1,-1};
void bfs(vector<vector<int>>&vis,vector<vector<char>>&grid,int i,int j,int n,int m)
{
    vis[i][j] = 1;
    queue<pair<int,int>>q;
    q.push({i,j});
    // vis[i][j] = 1;
    while(!q.empty())
    {
        auto top = q.front();
        q.pop();
        vis[top.first][top.second] = 1;
        for(int i=0;i<4;i++)
        {
            int row = top.first + dr[i];
            int col = top.second + dc[i];
            if(row >= 0 && row < n && col >=0 && col < m)
            {
                if(vis[row][col] == 0 && grid[row][col] == '1')
                {
                    vis[row][col] = 1;
                    q.push({row,col});
                }
            }
        }

    }
}
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int cnt = 0;
        int m = grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j] == '1' && vis[i][j] == 0)
                {
                    // cout<<i<<" "<<j<<endl;
                    cnt++;
                    bfs(vis,grid,i,j,n,m);
                }
            }
        }
         return cnt;
    }
};
