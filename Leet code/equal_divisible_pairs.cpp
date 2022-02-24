#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k;
    vector<int> nums;
    int n = nums.size();

    for (i = 0; i < n; i++)
    {
        cin >> k;
        nums.push_back(k);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (nums[i] == nums[j] &&i *j % k = 0)
            {
            }
        }
    }

    return 0;
}