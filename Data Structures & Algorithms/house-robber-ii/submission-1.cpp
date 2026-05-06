class Solution {
public:
int fun(vector<int>&nums)
{ 
    int n = nums.size();
    vector<int>dp(n);
    dp[0] = nums[0];
    dp[1] = max(nums[0],nums[1]);
    for(int i=2;i<nums.size();i++)
    {
        dp[i] = max(dp[i-1] , dp[i-2] + nums[i]);
    }
    return *max_element(dp.begin(),dp.end());
}
    int rob(vector<int>& nums) {
        vector<int>temp1,temp2;
        int n = nums.size();
        for(int i=0;i<n-1;i++)
        {
            temp1.push_back(nums[i]);
        }
        for(int i=1;i<n;i++)
        {
            temp2.push_back(nums[i]);
        }
        if(nums.size() == 1) return nums[0];
        int a = fun(temp1);
        int b = fun(temp2);
        return max(a,b);
    }
};
