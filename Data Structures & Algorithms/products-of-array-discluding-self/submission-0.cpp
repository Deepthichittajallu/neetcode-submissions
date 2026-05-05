class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        map<int,int>mp;
        int n=nums.size();
        vector<int>v(n,0);
        for(auto it:nums)
        {
            mp[it]++;
        }
        int temp =1;
        int temp1 = 1;
       if(mp[0] > 1) return v;
       else if(mp[0] == 1)
       {
        for(int i=0;i<n;i++)
        {
            if(nums[i] != 0)
            {
                temp = temp*nums[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i] == 0)
            {
                v[i] = temp;
            }
        }
       }
       else if(mp[0] == 0)
       {
        for(int i=0;i<n;i++)
        {
            temp1 = temp1*nums[i];
        }
        for(int i=0;i<n;i++)
        {
            v[i] = temp1/nums[i];
        }
       }
       return v;
    }
};  
