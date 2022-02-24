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
    int n, i, x, q, cmp;
    cin >> n;
    vector<int> v;

    for (i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    cin >> q;
    for (i = 0; i < q; i++)
    {
        cin >> x;
        vector<int>::iterator cmp = lower_bound(v.begin(), v.end(), x);
        cout << cmp[i];
    }

    return 0;
}
