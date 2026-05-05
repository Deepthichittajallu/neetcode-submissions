class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int l = 0;
        int r =n-1;
        int ans = 0;
        while(l < r)
        {
            int mini = min(heights[l],heights[r]);
            ans = max(ans,(r-l) * mini);
            if(heights[r] < heights[l]) r--;
            else l++;
        }
        return ans;
    }
};
