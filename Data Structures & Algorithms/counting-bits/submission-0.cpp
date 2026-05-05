class Solution {
public:
    int fun(int n)
    {
        int cnt=0;
        for(int i=0;i<32;i++)
        {
            if((1<<i) & n)
            {
                cnt++;
            }
        }
        return cnt;
    }
    vector<int> countBits(int n) {
        vector<int>res;
        for(int i=0;i<=n;i++)
        {
            res.push_back(fun(i));
        }
        return res;
    }
};
