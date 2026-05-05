class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>st;
        int cnt = 1;
        int maxi = INT_MIN;
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return 1;
        if(nums.size() == 2 && nums[0] == nums[1]) return 1;
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }
        vector<int>v;
        for(auto it:st)
        {
            auto temp = it;
            v.push_back(temp);
        }
        for(int i=1;i<v.size();i++)
        {
           int prev = v[i-1];
           if(v[i] - prev == 1)
           {
            cnt++;
            maxi = max(cnt,maxi);
           }
           else
           {
            cnt = 1;
           }
        }
        return maxi;
    }
};
