class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        int low =0;
        int high = n-1;
        // int nu = nums[0];
        int ans =0;
        int cnt = 1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i] > nums[i-1]) cnt++;
        }
        if(nums.size() == 1) return nums[0];
        if(nums.size() == 2) return min(nums[0],nums[1]);
        if(cnt == nums.size()) return nums[0];
        else
        {
        while(low<=high)
        {
            int mid = low + (high - low)/2;
            if(nums[mid] < nums[mid-1] && nums[mid] < nums[mid+1])
            {
                ans = nums[mid];
                break;
            }
            else if(nums[mid]  > nums[mid+1] && nums[mid] > nums[mid-1])
            {
                ans = nums[mid+1];
                break;
            }
            else if(nums[mid] <= nums[high])
            {
                high  = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        }
        return ans;
    }
};
