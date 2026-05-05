class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int s=0;
        vector<int>l;
        for(int i=0;i<nums.size();i++)
        {
            // s=target-nums[i];
            for(int j=0;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target && i!=j)
                {
                    l.push_back(i);
                    l.push_back(j);
                    return l;
                }
            }
        }
        return l;
    }
};
