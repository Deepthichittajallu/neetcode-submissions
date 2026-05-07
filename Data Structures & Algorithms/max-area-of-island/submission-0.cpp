class Solution {
public:
vector<int>dr = {-1,1,0,0};
vector<int>dc = {0,0,-1,1};
int bfs(vector<vector<int>>&vis,vector<vector<int>>& grid,int i,int j,int n,int m)
{
    vis[i][j] = 1;
    queue<pair<int,int>>q;
    q.push({i,j});
    int cnt = 1;
    while(!q.empty())
    {
        auto top = q.front();
        q.pop();
        for(int i=0;i<4;i++)
        {
            int row = top.first+dr[i];
            int col = top.second+ dc[i];
            if(row >= 0 && row < n && col >= 0 && col < m)
            {
                if(grid[row][col] == 1 && vis[row][col] == 0)
                {
                    vis[row][col] = 1;
                    cnt++;
                    q.push({row,col});
                }
            }
        }
    }
    return cnt;
}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j] == 1 && vis[i][j] == 0)
                {
                    ans = max(ans,bfs(vis,grid,i,j,n,m));
                }
            }
        }
        return ans;
    }
};
