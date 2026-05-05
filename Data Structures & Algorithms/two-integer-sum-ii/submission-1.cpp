class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int l = 0;
        int r = n - 1;
        int p1 = 0,p2 = 0;
        sort(numbers.begin(),numbers.end());
        while(l<=r)
        {
            int sum = numbers[l]+numbers[r];
            if(sum > target)
            {
                r--;
            }
            else if( sum <  target)
            {
                l++;
            }
            else if(sum == target)
            {
                p1 = l+1;
                p2 = r+1;
                break;
            }
        }
        return {p1,p2};
    }
};
