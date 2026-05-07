class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod = 1;
        int n = nums.size();
        vector<int>dp1(n);
        vector<int>dp2(n);
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == 0)
            {
                dp1[i] = 0;
                prod = 1;
            }
            else
            {
                prod = prod * nums[i];
                dp1[i] = prod;
            }
        }
        prod = 1;
        for(int i = n-1;i>=0;i--)
        {
            if(nums[i] == 0)
            {
                dp2[i] = 0;
                prod = 1;
            }
            else
            {
                prod = prod * nums[i];
                dp2[i] = prod;
            }
        }
        int ans = max(*max_element(dp1.begin(),dp1.end()) , *max_element(dp2.begin(),dp2.end()));
        return ans;
    }
};
