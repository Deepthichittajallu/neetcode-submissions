class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sml = INT_MAX;
        int ans = 0;
        for(int i=0;i<prices.size();i++)
        {
            sml = min(sml,prices[i]);
            ans = max(ans,prices[i] - sml);
        }
        return ans;
    }
};
