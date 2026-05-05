class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int>mp;
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto it:mp)
        {
            // cout<<it.second;
            if(it.second>1)
            {
                cnt++;
            }
            
        }
        if (cnt>=1)
        {
            return true;
        }
        return false;
    }
};
