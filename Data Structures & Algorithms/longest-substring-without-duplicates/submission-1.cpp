class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;
        int n = s.size();
        map<char,int>mp;
        int ans = 1;
        if(s.size() == 0) return 0;
        while(r < n)
        {
            mp[s[r]]++;
            while(mp[s[r]] > 1)
            {
                mp[s[l]]--;
                if(mp[s[l]] == 0) mp.erase(s[l]);
                l++;
            }
            ans = max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};
