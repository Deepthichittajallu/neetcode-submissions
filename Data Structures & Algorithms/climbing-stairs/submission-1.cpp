class Solution {
public:
    int climbStairs(int n) {
        vector<int>dp(n+1);
        if(n <= 2) return n;
        int a = 1;
        int b = 2;
        int c = 0;
        for(int i = 3;i<=n;i++)
        {
            c = a+b;
            a = b;
            b = c;
        }
        return b;
    }
};
