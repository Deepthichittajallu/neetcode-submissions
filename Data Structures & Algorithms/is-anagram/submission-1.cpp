class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t && s.size()==t.size())
        {
            return true;
        }
        return false;
    //    map<int,int>a;
    //     map<int,int>b;
    //     for(int i=0;i<s.size();i++)
    //     {
    //         a[s[i]]++;
    //     }
    //     for(int i=0;i<t.size();i++)
    //     {
    //         b[t[i]]++;
    //     }
    //     for(auto it)
       
    }
};
