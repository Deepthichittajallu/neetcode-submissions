class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
        string temp1 = "";
        for(int i=0;i<s.size();i++)
        {
            if((s[i] >= 'A' && s[i] <= 'Z' || (s[i] - '0' >= 0 && s[i] - '0' <= 9)) || (s[i] >= 'a' && s[i] <= 'z' || (s[i] - '0' >= 0 && s[i] - '0' <=9)))
            {
                temp += tolower(s[i]);
                temp1 +=tolower(s[i]);
            }
        }
        reverse(temp.begin(),temp.end());
        cout<<temp<<" "<<temp1;
        if(temp == temp1) return true;
        return false;
    }
};
