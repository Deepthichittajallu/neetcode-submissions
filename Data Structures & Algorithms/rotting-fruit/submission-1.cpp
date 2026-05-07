class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        cout<<n<<" "<<m;
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j] == 2)
                {
                    q.push({i,j});
                }
            }
        }
        int cnt = 0;
        vector<int>dr = {0,0,-1,1};
        vector<int>dc = {1,-1,0,0};
        while(!q.empty())
        {
            int n1 = q.size();
            bool found = false;
            for(int j =0;j<n1;j++)
            {
                auto top = q.front();
                q.pop();
                
                for(int i=0;i<4;i++)
                {
                    // cout << "Hi";
                    int row = top.first+dr[i];
                    int col = top.second+dc[i];
                    // cout << row << " " << col << endl;
                    // cout << grid[row][col] << endl;
                    if(row >= 0 && row<n && col >= 0 && col < m)
                    {
                        cout << grid[row][col] << endl;
                        if(grid[row][col] == 1)
                        {
                            found = true;
                        // cout << "Hi";
                            grid[row][col] = 2;
                            q.push({row,col});
                            // cout<<row<<" "<<col<<endl;
                        }
                    }
                }
            }
            if(found) cnt++;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j] == 1) return -1;
            }
        }
        return cnt;
    }
};
