class Solution {
public:
    int trap(vector<int>& nums) {
        int n = nums.size();
        int i = 1;
        int j = n-2;
        int lmax = nums[0];
        int rmax = nums[n-1];
        int sol = 0;
        while(i <= j)
        {
            if(lmax < rmax)
            {
                int ans = max(0, lmax - nums[i]);
                sol += ans;
                lmax = max(lmax, nums[i]);
                i++;
            }
            else
            {
                int ans = max(0, rmax - nums[j]);
                sol += ans;
                rmax = max(rmax, nums[j]);
                j--;
            }
        }
        return sol;
    }
};
