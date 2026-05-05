class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++)
        {
            map<int,int>mp;
            for(int j=0;j<board[i].size();j++)
            {
                if(board[i][j] !='.') mp[board[i][j]]++;
            }
            for(auto it:mp)
            {
                if(it.second > 1) return false;
            }
        }
        for(int i=0;i<board[0].size();i++)
        {
            map<int,int>mp;
            for(int j=0;j<board.size();j++)
            {
                if(board[j][i] !='.') mp[board[j][i]]++;
            }
            for(auto it:mp)
            {
                if(it.second > 1) return false;
            }
        }
        for(int i=0;i<board.size();i+=3)
        {
            for(int j=0;j<board[i].size();j+=3)
            {
                map<int,int>mp;
                for(int a=i;a<i+3;a++)
                {
                    for(int b=j;b<j+3;b++)
                    {
                        if(board[a][b] != '.') mp[board[a][b]]++;
                    }
                }
                for(auto it:mp)
                {
                    if(it.second > 1) return false;
                }
            }
        }
        return true;
    }
};
