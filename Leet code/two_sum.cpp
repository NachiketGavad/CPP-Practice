#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ans;
        int i, j, n = nums.size();
        for (i = 0; i < n - 1; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> nums;
    int i, j, x, n, target, ans[2];
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }

    cin >> target;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans[0] = i;
                ans[1] = j;
                break;
            }
        }
    }

    return 0;
}