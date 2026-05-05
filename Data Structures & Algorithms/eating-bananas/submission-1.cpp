class Solution {
public:
    int minEatingSpeed(vector<int>& nums, int h) {
        long long ans =0 ;
        for(long long i=0;i<nums.size();i++)
        {
            ans+=nums[i];
        }
        long long low  = 1;
        long long high = ans;
        long long mini = 0;
        while(low <= high)
        {
            long long temp = 0;
            long long mid = low + (high-low)/2;
            for(long long i=0;i<nums.size();i++)
            {
                temp += ((nums[i]%mid) ? (nums[i]/mid)+1 : (nums[i]/mid));
            }
            if(temp <= h)
            {
                mini = mid;
                high = mid - 1;
            }
            else
            {
                low = mid+1;
            }
        }
        return (int)mini;
    }
};
