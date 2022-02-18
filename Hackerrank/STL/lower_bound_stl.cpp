#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, i, x, check_n, cmp;
    cin >> n;
    vector<int> v;

    for (i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    cin >> check_n;
    for (i = 0; i < check_n; i++)
    {
        cin >> x;
        vector<int>::iterator cmp = lower_bound(v.begin(), v.end(), x);
    }

    return 0;
}
