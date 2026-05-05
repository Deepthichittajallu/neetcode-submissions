class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans1 = 1;
        int maxi1 = INT_MIN;
        int ans2 = 1;
        int maxi2 = INT_MIN;
        int ans = INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            ans1 = ans1*nums[i];
            maxi1 = max(maxi1,ans1);
            if(ans1 == 0)
            {
                ans1 = 1;
            }
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            ans2 = ans2*nums[i];
            maxi2 = max(maxi2,ans2);
            if(ans2 == 0)
            {
                ans2 = 1;
            }
        }
        return max(maxi1,maxi2);
    }
};
