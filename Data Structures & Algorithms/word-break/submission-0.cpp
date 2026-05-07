class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
        vector<int>dp(n+1,false);
        int maxi = 0;
        set<string>st;
        for(auto it:wordDict)
        {
            maxi = max(maxi, (int)it.size());
            st.insert(it);
        }
        dp[0] = true;
        for(int i = 1;i<=n;i++)
        {
            for(int j=1;j<=maxi;j++)
            {
                if(i-j < 0) break;
                string temp = s.substr(i-j,j);
                if(st.find(temp) != st.end() && dp[i-j] == true) dp[i] = true;
            }
        }
        return dp[n];
    }
};
